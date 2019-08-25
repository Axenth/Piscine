/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mpeerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 10:23:18 by mpeerdem      #+#    #+#                 */
/*   Updated: 2019/08/25 13:53:31 by mpeerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUF_SIZE 30000

int		main(int argc, char **argv)
{
	int		size;
	char	*input;
	int		i;

	if (argc != 1)
		input = argv[1];
	else
	{
		input = (char*)malloc(BUF_SIZE + 1);
		size = read(0, input, BUF_SIZE);
		if (size == 0)
		{
			print_error(1);
			return (0);
		}
	}
	i = 0;
	check_rush(input);
	return (0);
}
