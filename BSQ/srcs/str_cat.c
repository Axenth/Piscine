/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   str_cat.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:49:33 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/26 14:14:27 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"

char	*str_cat(char *s1, char *s2)
{
	int		i;
	int		j;
	int		size;
	char	*result;

	size = str_len(s1) + str_len(s2) + 1;
	result = (char*)malloc(sizeof(char) * size);
	result = str_cpy(result, s1);
	i = str_len(s1);
	j = 0;
	while (j < str_len(s2))
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	free(s2);
	return (result);
}
