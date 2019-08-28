/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   read_obstacle_types.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 14:15:05 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/27 20:51:27 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"
#include "basic_functions.h"

char	*read_first_line(char *map, int length_to_new_line)
{
	int		i;
	char	*result;

	i = 0;
	result = malloc(sizeof(char) * length_to_new_line);
	while (i < length_to_new_line)
	{
		result[i] = map[i];
		i++;
	}
	return (result);
}

char	read_space(char *first_line)
{
	int i;

	i = 0;
	while (first_line[i] != '\0')
		i++;

	return (first_line[i - 3]);
}

char	read_obstacle(char *first_line)
{
	int i;

	i = 0;
	while (first_line[i] != '\0')
		i++;

	return (first_line[i - 2]);
}

char	read_filled(char *first_line)
{
	int i;

	i = 0;
	while (first_line[i] != '\0')
		i++;

	return (first_line[i - 1]);
}

char	*read_size(char *first_line)
{
	int		i;
	int		i2;
	char	*result;

	i = 0;
	i2 = 0;
	while (first_line[i] != '\0')
		i++;
	result = malloc(sizeof(char) * i - 3);
	while (i2 < i - 3)
	{
		result[i2] = first_line[i2];
		i2++;
	}

	return (result);
}
