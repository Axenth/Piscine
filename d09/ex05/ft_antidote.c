/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_antidote.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/15 23:07:59 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/15 23:47:06 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	int i2;

	if (((i > j) && (i < k)) || ((i < j) && (i > k)))
		i2 = i;
	if (((j > i) && (j < k)) || ((j < i) && (j > k)))
		i2 = j;
	if (((k > j) && (k < i)) || ((k < j) && (k > i)))
		i2 = k;
	return (i2);
}
