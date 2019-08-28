/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 14:24:28 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/22 13:14:52 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define BUF_SIZE 30000

int		main(int argc, char **argv)
{
	int i;
	int i2;

	i = 0;
	i2 = 1;
	while (i < argc)
		i++;
	if (i == 1)
		ft_putstr(strerror(errno));
	else if (i >= 2)
		while (i2 < i)
		{
			read_file(argv[i2]);
			i2++;
			if (i != i2)
				ft_putchar('\n');
		}

	else
		ft_putstr(strerror(errno));
}

void	read_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(strerror(errno));
		return ;
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr(strerror(errno));
		return ;
	}
}
