/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   write.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:57:24 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/28 02:56:53 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_fd_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_fd_putstr(int fd, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_fd_putchar(fd, str[i]);
		i++;
	}
}
