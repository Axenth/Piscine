/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/10 17:09:56 by jlensing      #+#    #+#                 */
/*   Updated: 2019/08/10 17:19:57 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial (int nb)
{
	static int i1;
	static int i2;
	static int i3;
	static int i4;

	if(i1 == 0)
	{
		i1 = 1;
		i2 = 1;
		i3 = 2;
		i4 = 1;
	}

	i2 = i4;
	i4 = i2 * i3;
	i3++;
	if( i1 != nb)
	{
		i1++;
		ft_recursive_factorial(nb);
		return (0);
	}
	else
	{
		return (i4);
	}
}

int main(void)
{
	printf("%d", ft_recursive_factorial(6));
	return (0);
}
