/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/14 08:59:03 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/14 09:45:43 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dst;

	i = 0;
	len = 0;
	while (src[i] != '\0')
		len++;
	dst = (char*)malloc(sizeof(*dst) * len + 1);
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (dst == NULL)
		return (NULL);
	return (dst);
}
