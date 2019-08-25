/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_rectangle.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/25 11:42:35 by rpet          #+#    #+#                 */
/*   Updated: 2019/08/25 12:08:20 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

int		is_rectangle(char **str)
{
	int		i;
	int		width;

	i = 0;
	width = str_len(str[0]);
	while (str[i] != 0)
	{
		if (str_len(str[i]) != width)
			return (0);
		i++;
	}
	return (1);
}
