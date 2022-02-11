/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: simoncleerdin <simoncleerdin@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 16:39:40 by simoncleerd   #+#    #+#                 */
/*   Updated: 2022/02/11 17:10:01 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_hex(va_list args, char f)
{
	char	*s;
	int		i;

	i = 0;
	if (f == 'p' && va_arg(args, unsigned int) == 0)
	{
		s = "0x0";
		return (write(0, s, ft_strlen(s)));
	}
	s = ft_utoa_base(va_arg(args, unsigned int), 16);
	if (f == 'X')
	{
		while (s[i])
		{
			ft_toupper(s[i]);
			i++;
		}
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
	{
		ft_putnbr_fd((va_arg(args, int)), 0);
		return (ft_num_len((va_arg(args, int))));
	}
	if (f == 'u')
	{
		ft_putuns_fd(va_arg(args, unsigned int), 0);
		return (ft_num_len(va_arg(args, unsigned int)));
	}
	if (f == 'x' || f == 'X' || f == 'p')
		return (handle_hex(args, f));
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
