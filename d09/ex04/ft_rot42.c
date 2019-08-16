/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rot42.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/15 22:05:47 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/16 00:04:07 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	swap(char c)
{
	int i2;

	i2 = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		while (i2 != 42)
		{
			c++;
			if (c == 91)
				c = 65;
			if (c == 123)
				c = 97;
			i2++;
		}
	}
	i2 = 0;
	return (c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = swap(str[i]);
		i++;
	}
	return (str);
}
