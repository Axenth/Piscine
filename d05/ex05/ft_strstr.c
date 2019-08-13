/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 14:03:47 by jlensing      #+#    #+#                 */
/*   Updated: 2019/08/12 14:03:51 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int i2;

	i = 0;
	if (sizeof(to_find) == 0)
		return (str);
	while (str[i] != '\0')
	{
		i2 = 0;
		while (str[i + i2] == to_find[i2])
		{
			if (to_find[i2 + 1] == '\0')
				return (str + i);
			i2++;
		}
		i++;
	}
	return (NULL);
}
