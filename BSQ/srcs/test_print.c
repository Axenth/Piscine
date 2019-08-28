/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_print.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 19:05:49 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/28 08:42:45 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"
#include "basic_functions.h"
#include "read_write_obstacle_file.h"
#include "test_functions.h"


void	test_print(char *map)
{
	int		i;
	int		i2;
	char	**input;

	i = 0;
	i2 = 0;

	input = convert_to_array(map);
	//save_obstacle_x_y(input);
	write_debug("debug.log", "\n\nEdited Map: \n\n");
	while (input[i] != NULL)
	{
		while (input[i][i2] != '\0')
		{
		//	ft_putchar(input[i][i2]);
				write_debug_char("debug.log", input[i][i2]);
			i2++;
		}
		write_debug_char("debug.log", '\n');
		//ft_putchar('\n');
		i2 = 0;
		i++;
	}
	write_debug("debug.log", "\n\n\n");
	alg_square(input, 1, 0, 0);

	
}



