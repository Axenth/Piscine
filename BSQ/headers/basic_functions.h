/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   basic_functions.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:42:10 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/26 19:58:17 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC_FUNCTIONS_H
# define BASIC_FUNCTIONS_H
# include <stdlib.h>
# include <unistd.h>

char	*str_cat(char *s1, char *s2);
int		str_len(char *str);
char	*str_cpy(char *str, char *src);
void	ft_putchar (char c);
void	ft_putstr(char *str);
int		amount_lines(char *str);
int		length_to_newline(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*remove_n_from_string(char *str, int n);

#endif