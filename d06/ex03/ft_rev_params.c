/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/13 14:03:57 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/13 14:12:15 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int i2;

	i = 1;
	while (argv[i] != NULL)
	{
		i++;
	}
	i--;
	while (i > 0)
	{
		while (argv[i][i2] != '\0')
		{
			ft_putchar(argv[i][i2]);
			i2++;
		}
		ft_putchar('\n');
		i2 = 0;
		i--;
	}
	return (0);
}