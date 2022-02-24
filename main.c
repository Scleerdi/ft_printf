/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/23 14:00:55 by scleerdi      #+#    #+#                 */
/*   Updated: 2022/02/24 16:30:36 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int				x;
	int				y;
	unsigned int	a;
	int				b;
	void			*p;

	a = 2147483647;
	b = -2147483648;
	p = NULL;
	// printf("|-----------------|\n");
	// printf("|char tests|\n");
	// printf("|-----------------|\n");
	// x = ft_printf("|char : |%c|\n", 'Y');
	// y = printf("|char : |%c|\n", 'Y');
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// printf("|-----------------|\n");
	// printf("|string tests|\n");
	// printf("|-----------------|\n");
	// x = ft_printf("|%s|\n", NULL);
	// y = printf("|%s|\n", NULL);
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// printf("|-----------------|\n");
	// printf("|pointer tests|\n");
	// printf("|-----------------|\n");
	// x = ft_printf("|ptr : |%p|\n", &a);
	// y = printf("|ptr : |%p|\n", &a);
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// x = ft_printf("|ptr : |%p|\n", p);
	// y = printf("|ptr : |%p|\n", p);
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// printf("|-----------------|\n");
	// printf("|int & dec tests|\n");
	// printf("|-----------------|\n");
	// x = ft_printf("|int : |%i|\n", a);
	// y = printf("|int : |%i|\n", a);
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// x = ft_printf("|dec : |%d|\n", b);
	// y = printf("|dec : |%d|\n", b);
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// printf("|-----------------|\n");
	// printf("|uint tests|\n");
	// printf("|-----------------|\n");
	// x = ft_printf("|uint : |%u|\n", a);
	// y = printf("|uint : |%u|\n", a);
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// printf("|-----------------|\n");
	// printf("|hex & HEX tests|\n");
	// printf("|-----------------|\n");
	// x = ft_printf("|hex : |%x|\n", 9223372036854775807LL);
	// y = printf("|hex : |%x|\n", 9223372036854775807LL);
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// x = ft_printf("|HEX : |%X|\n",a);
	// y = printf("|HEX : |%X|\n", a);
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// printf("|-----------------|\n");
	// printf("|%% tests|\n");
	// printf("|-----------------|\n");
	// x = ft_printf("|%%%%|\n");
	// y = printf("|%%%%|\n");
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// printf("|-----------------|\n");
	printf("|all tests|\n");
	x = ft_printf("|-----------------|\n %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	y = printf("|-----------------|\n %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n|mine = %d|\n|std = %d|\n", x, y);
	//free(p);
	printf("|-------done------|\n");
	// while (1)
	// 	(void)a;
	return (0);
}

	// int		x;
	// int		y;
	// void	*p;

	// p = malloc(5);
	// ft_printf("%d", ft_printf("whats this one do"));
	// y = printf("%d", printf("whats this one do"));
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// ft_printf("%d", ft_printf("%s", "isditzinnig?"));