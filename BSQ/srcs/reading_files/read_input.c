/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   read_input.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:45:12 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/27 20:37:42 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"
#include "basic_functions.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>

#define BUFF_SIZE 30000

char	*read_file(char *file_name)
{
	int		fd;
	int		ret;
	char	*buf;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		error_handeling(4);
		return (0);
	}
	buf = (char*)malloc(sizeof(char*) * BUFF_SIZE + 1);
	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = '\0';
	if (close(fd) == -1)
	{
		error_handeling(5);
		return (0);
	}
	return (buf);
}
