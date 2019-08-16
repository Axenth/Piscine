/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_collatz_conjecture.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 05:23:18 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/16 07:40:22 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (base % 2 == 0)
		return (1 + ft_collatz_conjecture(base / 2));
	else if (base % 2 == 1)
		return (1 + ft_collatz_conjecture(base * 3 + 1));
	return (0);
}
