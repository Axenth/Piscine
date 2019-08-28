/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/19 18:07:39 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/20 12:55:01 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int value1;
	int value2;
	int result;

	argc = 1;
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	result = calculate(value1, *argv[2], value2);
	if ((*argv[2] == '/' && value2 == 0) || (*argv[2] == '%' && value2 == 0) ||
		(*argv[2] == '/' && value1 == 0) || (*argv[2] == '%' && value2 == 0))
	{
		return (0);
	}
	else
	{
		if (result == 0)
		{
			ft_putchar('0');
		}
		else
			ft_putnbr(result);
		ft_putchar('\n');
	}
	return (0);
}

int		calculate(int value1, char operator, int value2)
{
	int		(*f[5]) (int, int);

	f[0] = ft_addition;
	f[1] = ft_subtract;
	f[2] = ft_division;
	f[3] = ft_modulo;
	f[4] = ft_multiply;
	if (operator == '+')
		return (f[0])(value1, value2);
	if (operator == '-')
		return (f[1])(value1, value2);
	if (operator == '/')
		return (f[2])(value1, value2);
	if (operator == '%')
		return (f[3])(value1, value2);
	if (operator == '*')
		return (f[4])(value1, value2);
	return (0);
}
