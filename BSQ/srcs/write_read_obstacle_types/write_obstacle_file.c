/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   write_obstacle_file.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 15:39:21 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/28 02:56:53 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"
#include "basic_functions.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void	write_obstacle_file(char *filename, char *firstline)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		error_handeling(4);
		return ;
	}
	ft_fd_putstr(fd, firstline);
	if (close(fd) == -1)
	{
		error_handeling(5);
		return ;
	}
}
