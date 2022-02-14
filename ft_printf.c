/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: simoncleerdin <simoncleerdin@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 16:39:40 by simoncleerd   #+#    #+#                 */
/*   Updated: 2022/02/14 16:46:34 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_ptr(va_list args)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = ft_utoa_base((va_arg(args, size_t)), 16);
	ptr = ft_strjoin("0x", ptr);
	while (ptr[i])
	{
		ptr[i] = ft_tolower(ptr[i]);
		i++;
	}
	return (ft_putstr_fd(ptr, 0));
}

int	handle_hex(va_list args, char f)
{
	char	*s;
	int		i;

	i = 0;
	s = ft_utoa_base(va_arg(args, size_t), 16);
	while (s[i])
	{
		if (f == 'X')
			s[i] = ft_toupper(s[i]);
		else if (f == 'x')
			s[i] = ft_tolower(s[i]);
		i++;
	}
	return (write(0, s, ft_strlen(s)));
}

int	get_arg(va_list args, char f)
{
	if (f == 'c')
		return (ft_putchar_fd((va_arg(args, int)), 0));
	if (f == 's')
		return (ft_putstr_fd((va_arg(args, char *)), 0));
	if (f == 'i' || f == 'd')
		return (ft_putstr_fd(ft_itoa((va_arg(args, int))), 0));
	if (f == 'u')
		return (ft_putuns_fd(va_arg(args, unsigned int), 0));
	if (f == 'x' || f == 'X')
		return (handle_hex(args, f));
	if (f == 'p')
		return (handle_ptr(args));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		print;

	i = 0;
	print = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			print += get_arg(args, format[i + 1]);
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == '%')
		{
			print += ft_putchar_fd('%', 0);
			i++;
		}
		else
			print += ft_putchar_fd(format[i], 0);
		i++;
	}
	va_end(args);
	return (print);
}
