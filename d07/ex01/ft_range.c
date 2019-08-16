/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/14 09:26:26 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/14 12:38:54 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *dest;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = (int*)malloc(sizeof(*dest) * (max - min));
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}
