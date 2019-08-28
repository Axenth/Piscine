/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft.h                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 08:03:14 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/20 12:30:55 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_addition(int value1, int value2);
int		ft_subtract(int value1, int value2);
int		ft_division(int value1, int value2);
int		ft_modulo(int value1, int value2);
int		ft_multiply(int value1, int value2);
int		ft_atoi(char *str);
int		calculate(int value1, char operator, int value2);
void	ft_putnbr(int i);

#endif
