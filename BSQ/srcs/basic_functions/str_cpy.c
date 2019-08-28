/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   str_cpy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:53:17 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/26 18:03:29 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"
#include "basic_functions.h"

char	*str_cpy(char *str, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
