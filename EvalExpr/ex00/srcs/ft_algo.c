/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_algo.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 18:52:15 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/22 15:39:53 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_char_to_ascii(char **arr)
{
	int		*value;
	int		i;

	i = 0;
	while (arr[i] != '\0')
		i++;
	value = (int*)malloc(sizeof(*value) * i);
	i = 0;
	while (arr[i] != '\0')
	{
		value[i] = ft_atoi(arr[i])
		i++;
	}
}

int		ft_algo(char **arr)
{
	int		(*f[5]) (int, int);

	f[0] = ft_addition;
	f[1] = ft_subtraction;
	f[2] = ft_division;
	f[3] = ft_modulo;
	f[4] = ft_multiply;


	int *arr;

	int i;

	i = 0;

	while(arr[i] != '(')
	{
		i++;
	}
	/* make function that counts tthe opening parenthesis brackets "(" 
}
