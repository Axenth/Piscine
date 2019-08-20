/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft.h                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sweda <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/17 15:30:39 by sweda          #+#    #+#                */
/*   Updated: 2019/08/18 17:03:17 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>

int		check_row(char n, unsigned int row, char tab[9][9]);
int		check_col(char n, unsigned int col, char tab[9][9]);
int		check_block(char n, unsigned int row, unsigned int col, char tab[9][9]);
int		fill_sudoku(char tab[9][9], int position);
void	ft_putarray(char tab[9][9]);
void	ft_putstr(char *str);
int		ft_putchar(char c);
void	fill_array(char tab[9][9], char **argv);
int		check_is_valid_argument(char tab[9][9]);
int		check_is_valid_length(char **argv);
int		row_check1(int row, char array[9][9]);
int		col_check1(int col, char array[9][9]);
void	validation(char tab[9][9]);

#endif
