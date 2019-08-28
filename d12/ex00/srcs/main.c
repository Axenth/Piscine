/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 14:24:28 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/21 17:21:58 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
		i++;
	if (i == 1)
		print_error(1);
	else if (i == 2)
		read_file(argv[1]);
	else if (i > 2)
		print_error(2);
	else
		print_error(0);
}

void	read_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		print_error(0);
		return ;
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		print_error(0);
		return ;
	}
}
