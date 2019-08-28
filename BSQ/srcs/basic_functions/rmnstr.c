/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rmnstr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 19:40:28 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/27 14:11:24 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"

char	*remove_n_from_string(char *str, int n)
{
	int		i;
	int		i2;
	int		i3;
	char	*dest;

	i = 0;
	i2 = 0;
	i3 = 0;
	while (str[i] != '\0')
		i++;
	dest = malloc(sizeof(char*) * i - n);
	while (i2 < i - n)
	{
		dest[i2] = str[i2];
		i2++;
	}
	while (i2 < i)
	{
		dest[i2] = '\0';
		i2++;
	}
	return (dest);
}
