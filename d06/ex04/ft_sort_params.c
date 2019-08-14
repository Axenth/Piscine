/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/13 15:33:40 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/14 11:37:39 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return ((*s1 - *s2));
}

void	print(char *to_print)
{
	ft_putstr(to_print);
	ft_putchar('\n');
}

void	ft_swap(char **argv, int i)
{
	char *temp;

	temp = argv[i];
	argv[i] = argv[i + 1];
	argv[i + 1] = temp;
}

int		main(int argc, char **argv)
{
	int		i;
	int		i2;

	i2 = 1;
	while (i2)
	{
		i2 = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(argv, i);
				i2 = 1;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		print(argv[i]);
		i++;
	}
	return (0);
}
