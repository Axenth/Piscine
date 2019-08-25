/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush2.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mpeerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 10:24:56 by mpeerdem       #+#    #+#                */
/*   Updated: 2019/08/25 13:45:46 by mpeerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2_H
# define RUSH2_H

int		amount_lines(char *str);
int		is_rectangle(char **str);
int		str_len(char *str);
char	**convert_to_array(char *str);
int		length_to_newline(char *str);
void	check_rush(char *input);
int		is_rush(int rushnum, char **box);
int		is_rush_line(char *characters, int char_offset, char *line);
char	*rush_chars(int rushnum);
char	*str_cpy(char *str, char *src);
void	print_output(char *rush_name,
		int horizontal, int vertical, int separator);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	print_error(int error);

#endif
