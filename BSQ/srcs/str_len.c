/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   str_len.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:52:22 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/26 16:45:06 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"

int		str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
