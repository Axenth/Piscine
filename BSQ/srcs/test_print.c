/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_print.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 19:05:49 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/26 19:56:23 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"
#include "basic_functions.h"
#include <stdio.h>

void	test_print(char *map)
{
	int i;
	int i2;
	int i3;
	char **input;

	i = 0;
	i3 = 0;
	i2 = length_to_newline(map) + 1;
	map = ft_strncpy(map, map, i2);
	map = remove_n_from_string(map, i2);
	input = convert_to_array(map);
	while (input[i] != NULL)
	{
		while (input[i][i3] != '\0')
		{
			ft_putchar(input[i][i3]);
			i3++;
		}
		ft_putchar('\n');
		i3 = 0;
		i++;
	}
}
