/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sweda <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/18 13:33:24 by sweda          #+#    #+#                */
/*   Updated: 2019/08/18 17:09:56 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int		x;
	int		y;
	char	tab[9][9];

	y = 0;
	x = 0;
	argc = 1;
	if (check_is_valid_length(argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	fill_array(tab, argv);
	validation(tab);
	return (0);
}

int		fill_sudoku(char tab[9][9], int position)
{
	unsigned int	row;
	unsigned int	col;
	char			candidate_n;

	row = position / 9;
	col = position % 9;
	candidate_n = 1 + '0';
	if (position == 81)
		return (1);
	if (tab[row][col] != '.')
		return (fill_sudoku(tab, position + 1));
	while (candidate_n <= (9 + '0'))
	{
		if (check_row(candidate_n, row, tab)
		&& check_col(candidate_n, col, tab)
		&& check_block(candidate_n, row, col, tab))
		{
			tab[row][col] = candidate_n;
			if (fill_sudoku(tab, position + 1))
				return (1);
		}
		candidate_n++;
	}
	tab[row][col] = '.';
	return (0);
}

void	fill_array(char tab[9][9], char **argv)
{
	int i;
	int i2;
	int i3;

	i = 1;
	i2 = 0;
	i3 = 0;
	while (i < 10)
	{
		while (i2 < 9)
		{
			tab[i3][i2] = argv[i][i2];
			i2++;
		}
		i2 = 0;
		i3++;
		i++;
	}
}

int		check_is_valid_argument(char tab[9][9])
{
	int i;
	int i2;
	int i3;

	i = 1;
	i2 = 0;
	i3 = 0;
	while (i < 10)
	{
		while (i2 < 9)
		{
			if (tab[i3][i2] == '.' ||
			(tab[i3][i2] >= 49 && tab[i3][i2] <= 57))
				i2++;
			else
			{
				return (0);
			}
		}
		i2 = 0;
		i3++;
		i++;
	}
	return (1);
}

int		check_is_valid_length(char **argv)
{
	int i;
	int i2;

	i = 1;
	i2 = 0;
	while (argv[i] != '\0')
	{
		while (argv[i][i2] != '\0')
			i2++;
		if (i2 != 9)
			return (0);
		i2 = 0;
		i++;
	}
	if (i != 10)
	{
		return (0);
	}
	return (1);
}
