/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 17:11:31 by scleerdi      #+#    #+#                 */
/*   Updated: 2022/02/14 17:00:16 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int				x;
	int				y;
	unsigned int	a;
	int				b;
	void			*p;

	a = 1004;
	b = -4001;
	p = malloc(5);
	printf("|-----------------|\n");
	printf("|char tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|char : |%c|\n", 'Y');
	y = printf("|char : |%c|\n", 'Y');
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|string tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|hello |%s|\n", "world");
	y = printf("|hello |%s|\n", "world");
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
	printf("|-------done------|\n");
	return (0);
}
