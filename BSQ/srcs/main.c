/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:41:19 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/26 19:24:38 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"
#include "general.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*input;
	char	*result;
	if (argc == 1)
	{
		error_handeling(1);
		return (0);
	}
	input = argv[1];
	result = read_file(argv[1]);
	test_print(result);
	//ft_putstr(result);
	return (0);
}
