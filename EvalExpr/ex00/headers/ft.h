/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft.h                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 13:28:43 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/20 16:21:06 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char	**ft_split_whitespaces(char *str);
int		amount_words(char *str);
char	*split_word (char *str, char **dest, int index);
int		len_Next_word(char *str);
char	*strip_whitespace(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_addition(int value1, int value2);
int		ft_subrtaction(int value1, int value2);
int		ft_division(int value1, int value2);
int		ft_mulitply(int value1, int value2);
int		ft_modulo(int value1, int value2);
char	*ft_strcat(char *dest, char *src);

#endif