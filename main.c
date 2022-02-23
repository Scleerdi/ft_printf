/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/23 14:00:55 by scleerdi      #+#    #+#                 */
/*   Updated: 2022/02/23 17:14:25 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int				x;
	int				y;
	unsigned int	a;
	int				b;
	void			*p;

	a = 2147483647;
	b = -2147483648;
	//p = malloc(5);
	printf("|-----------------|\n");
	printf("|char tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|char : |%c|\n", 'Y');
	y = printf("|char : |%c|\n", 'Y');
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|string tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|%s|\n", NULL);
	y = printf("|%s|\n", NULL);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|pointer tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|ptr : |%p|\n", p);
	y = printf("|ptr : |%p|\n", p);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	x = ft_printf("|ptr : |%p|\n", p);
	y = printf("|ptr : |%p|\n", p);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|int & dec tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|int : |%i|\n", a);
	y = printf("|int : |%i|\n", a);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	x = ft_printf("|dec : |%d|\n", b);
	y = printf("|dec : |%d|\n", b);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|uint tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|uint : |%u|\n", a);
	y = printf("|uint : |%u|\n", a);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|hex & HEX tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|hex : |%x|\n", a);
	y = printf("|hex : |%x|\n", a);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	x = ft_printf("|HEX : |%X|\n", a);
	y = printf("|HEX : |%X|\n", a);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|%% tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|%%%%|\n");
	y = printf("|%%%%|\n");
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|all tests|\n");
	//printf("|-----------------|\n");
	x = ft_printf("|-----------------|\n - c : %c - \n - s : %s -\n \
- x : %x - \n - X : %X - \n \
- %% : %% - \n - p : %p - \n \
- d : %d - \n - i : %i - \n \
- u : %u - \n", 'Y', "Though", b, b, p, a, b, a);
	y = printf("|-----------------|\n - c : %c - \n - s : %s -\n \
- x : %x - \n - X : %X - \n \
- %% : %% - \n - p : %p - \n \
- d : %d - \n - i : %i - \n \
- u : %u - \n", 'Y', "Though", b, b, p, a, b, a);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-------done------|\n");
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