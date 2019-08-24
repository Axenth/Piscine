/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 13:35:11 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/21 15:07:48 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#include <stdlib.h>

int		main(int ac, char **av)
{
	/*if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}*/

	char **arr;
	arr = ft_split_whitespaces(av[1]);

	int i;

	i = 0;
	while (arr[i] != '\0')
	{
		ft_putstr(arr[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
