/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   row_col_check.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sweda <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/17 17:19:21 by sweda          #+#    #+#                */
/*   Updated: 2019/08/18 16:44:03 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		row_check1(int row, char array[9][9])
{
	int j;
	int k;
	int h;

	h = 0;
	while (h < 9)
	{
		k = h + 1;
		j = array[row][h];
		while (k < 9)
		{
			if (array[row][k] == j && j != '.')
			{
				return (0);
			}
			k++;
		}
		h++;
	}
	return (1);
}

int		col_check1(int col, char array[9][9])
{
	int j;
	int k;
	int h;

	h = 0;
	while (h < 9)
	{
		k = h + 1;
		j = array[h][col];
		while (k < 9)
		{
			if (array[k][col] == j)
			{
				return (0);
			}
			k++;
		}
		h++;
	}
	return (1);
}
