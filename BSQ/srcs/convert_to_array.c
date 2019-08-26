/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert_to_array.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 17:52:48 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/26 19:19:31 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"
#include "general.h"

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
