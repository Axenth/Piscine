/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/10 11:15:29 by jlensing      #+#    #+#                 */
/*   Updated: 2019/08/10 11:42:52 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int i2;
	int i3;
	int i4;

	i = 1;
	i2 = 1;
	i3 = 2;
	i4 = 1;
	while (i < nb)
	{
		i2 = i4;
		i4 = i2 * i3;
		i3++;
		i++;
	}
	return (i4);
}
