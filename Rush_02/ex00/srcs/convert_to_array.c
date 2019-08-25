/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert_to_array.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 14:49:25 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/25 13:47:40 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"
#include <stdio.h>
#include <stdlib.h>

char	**convert_to_array(char *str)
{
	char	**square;
	char	*line;
	int		ver;
	int		i;

	i = 0;
	ver = amount_lines(str);
	square = (char**)malloc(sizeof(char*) * (ver + 1));
	while (i < ver)
	{
		line = (char*)malloc(sizeof(char) * (length_to_newline(str) + 1));
		square[i] = line;
		while (*str != '\n')
		{
			*line = *str;
			line++;
			str++;
		}
		str++;
		*line = '\0';
		i++;
	}
	square[i] = 0;
	return (square);
}

int		str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
