/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 17:11:31 by scleerdi      #+#    #+#                 */
/*   Updated: 2022/02/11 17:10:35 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		x;
	int		y;
	void	*p;

	// printf("|-----------------|\n");
	// printf("|char tests|\n");
	// printf("|-----------------|\n");
	// x = ft_printf("|char : |%c|\n", 'Y');
	// y = printf("|char : |%c|\n", 'Y');
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	// printf("|-----------------|\n");
	// printf("|string tests|\n");
	// printf("|-----------------|\n");
	// x = ft_printf("|hello |%s|\n", "world");
	// y = printf("|hello |%s|\n", "world");
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|pointer tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|ptr : |%p|\n", p);
	y = printf("|ptr : |%p|\n", p);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	p = malloc(5);
	x = ft_printf("|ptr : |%p|\n", p);
	y = printf("|ptr : |%p|\n", p);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|int & dec tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|int : |%i|\n", x);
	y = printf("|int : |%i|\n", x);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	x = ft_printf("|dec : |%d|\n", y);
	y = printf("|dec : |%d|\n", y);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|uint tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|uint : |%u|\n", (unsigned int)x);
	y = printf("|uint : |%u|\n", (unsigned int)x);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-----------------|\n");
	printf("|hex & HEX tests|\n");
	printf("|-----------------|\n");
	x = ft_printf("|hex : |%x|\n", x);
	y = printf("|hex : |%x|\n", x);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	x = ft_printf("|HEX : |%X|\n", x);
	y = printf("|HEX : |%X|\n", x);
	printf("|mine = %d|\n|std = %d|\n", x, y);
	// printf("|-----------------|\n");
	// printf("|%% tests|\n");
	// printf("|-----------------|\n");
	// x = ft_printf("|%%%%|\n");
	// y = printf("|%%%%|\n");
	// printf("|mine = %d|\n|std = %d|\n", x, y);
	printf("|-------done------|\n");
	return (0);
}
