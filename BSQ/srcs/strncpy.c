/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strncpy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 17:57:00 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/26 19:49:13 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <basic_functions.h>
#include <general.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int i2;

	i = 0;
	i2 = 0;
	while (src[i] != '\0')
	{
		if (n == 0)
		{
			dest[i2] = src[i];
			i++;
			i2++;
		}
		else
		{
			n--;
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
