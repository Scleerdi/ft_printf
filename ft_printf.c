/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: simoncleerdin <simoncleerdin@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 16:39:40 by simoncleerd   #+#    #+#                 */
/*   Updated: 2022/02/09 17:19:01 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	char	*str;

	str = ft_calloc(ft_strlen(format) + 1, sizeof(char));
	ft_putstr_fd(str, 0);
	return (ft_strlen(str));
}
