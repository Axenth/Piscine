/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 18:41:17 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/27 20:19:58 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"

void	ft_fd_putnbr(int fd, int nb)
{
	if (nb < 0)
	{
		ft_fd_putchar(fd, '-');
		ft_fd_putnbr(fd, -nb);
	}
	else if (nb > 9)
	{
		ft_fd_putnbr(fd, nb / 10);
		ft_fd_putchar(fd, nb % 10 + '0');
	}
	else
	{
		ft_fd_putchar(fd, nb + '0');
	}
}