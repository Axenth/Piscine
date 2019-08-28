/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validation.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <jlensing@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/18 16:57:43 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/18 17:04:17 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	validation(char tab[9][9])
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (row_check1(i, tab) == 0)
			if (col_check1(i, tab) == 0)
			{
				ft_putstr("Error\n");
				return ;
			}
		i++;
	}
	if (check_is_valid_argument(tab) == 0)
	{
		ft_putstr("Error\n");
		return ;
	}
	if (fill_sudoku(tab, 0) == 0)
	{
		ft_putstr("Error\n");
		return ;
	}
	ft_putarray(tab);
	return ;
}
