/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sweda <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/18 13:30:05 by sweda          #+#    #+#                */
/*   Updated: 2019/08/18 13:38:47 by sweda         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_row(char n, unsigned int row, char tab[9][9])
{
	unsigned int	col;

	col = 0;
	while (col < 9)
	{
		if (tab[row][col] == n)
			return (0);
		col++;
	}
	return (1);
}

int		check_col(char n, unsigned int col, char tab[9][9])
{
	unsigned int	row;

	row = 0;
	while (row < 9)
	{
		if (tab[row][col] == n)
			return (0);
		row++;
	}
	return (1);
}

int		check_block(char n, unsigned int row, unsigned int col, char tab[9][9])
{
	unsigned int	row_i;
	unsigned int	col_i;
	unsigned int	row_base;
	unsigned int	col_base;

	row_base = (row / 3) * 3;
	col_base = (col / 3) * 3;
	row_i = row_base;
	col_i = col_base;
	while (row_i < row_base + 3)
	{
		col_i = col_base;
		while (col_i < col_base + 3)
		{
			if (tab[row_i][col_i] == n)
				return (0);
			col_i++;
		}
		row_i++;
	}
	return (1);
}
