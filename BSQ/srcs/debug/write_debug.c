/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   write_debug.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 21:29:17 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/28 09:15:58 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "general.h"
#include "basic_functions.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "test_functions.h"

void	write_debug(char *filename, char *str)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		error_handeling(4);
		return ;
	}
	ft_fd_putstr(fd, str);
	if (close(fd) == -1)
	{
		error_handeling(5);
		return ;
	}
}


void	write_debug_char(char *filename, char c)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		error_handeling(4);
		return ;
	}
	ft_fd_putchar(fd, c);
	if (close(fd) == -1)
	{
		error_handeling(5);
		return ;
	}
}