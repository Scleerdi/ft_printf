/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 17:11:31 by scleerdi      #+#    #+#                 */
/*   Updated: 2022/02/09 17:20:13 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Source/ft_printf.h"

int	main(void)
{
	int	x;
	int	y;

	x = ft_printf("hello %s", "world");
	y = printf("hello %s", "world");
	printf("|mine = %d|\n|std = %d|\n", x, y);
	return (0);
}
