/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_concat_params.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/14 15:42:13 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/14 16:59:59 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char		*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		n;

	n = 0;
	i = 0;
	while (n < argc)
	{
		j = 0;
		while (argv[j])
		{
			n++;
			j++;
		}
	}
	str = (char*)malloc(sizeof(*str) * (n + 1));
	while (i < argc - 1)
	{
		str = ft_strcat(str, argv[i + 1]);
		i++;
	}
	return (str);
}
