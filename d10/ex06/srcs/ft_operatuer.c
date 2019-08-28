/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_operatuer.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/19 18:05:39 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/20 12:33:23 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_addition(int value1, int value2)
{
	return (value1 + value2);
}

int		ft_subtract(int value1, int value2)
{
	return (value1 - value2);
}

int		ft_division(int value1, int value2)
{
	if (value1 == 0 || value2 == 0)
	{
		ft_putstr("Stop: division by zero\n");
		return (0);
	}
	return (value1 / value2);
}

int		ft_modulo(int value1, int value2)
{
	if (value1 == 0 || value2 == 0)
	{
		ft_putstr("Stop: modulo by zero\n");
		return (0);
	}
	return (value1 % value2);
}

int		ft_multiply(int value1, int value2)
{
	return (value1 * value2);
}
