/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 09:03:11 by jlensing      #+#    #+#                 */
/*   Updated: 2019/08/12 09:10:36 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c){
	write(1,&c,1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int main(void)
{
	ft_putnbr(5003300);
	return (0);
}