/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:41:19 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/28 15:11:25 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"
#include "general.h"
#include "test_functions.h"
#include "read_write_obstacle_file.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*input;
	char	*result;
	char 	*firstline;
	//char	**map;

	if (argc == 1)
	{
		error_handeling(1);
		return (0);
	}
	input = argv[1];
	result = read_file(argv[1]);
	firstline = read_first_line(result, length_to_newline(result));
	write_obstacle_file("map.ob", firstline);
	print_obstacle_types(result);
	result = shorten_map(result);
	find_obstacles(convert_to_array(result),
			read_obstacle_file("map.ob", "obstacle"), result);
	test_print(result);
	delete_file("map.ob");
	return (0);
}

char	*shorten_map(char *map)
{
	int i;

	i = length_to_newline(map) + 1;
	map = ft_strncpy(map, map, i);
	map = remove_n_from_string(map, i);

	return (map);
}

void	print_obstacle_types(char *result)
{
	char *firstline;
	char space;
	char obstacle;
	char filler;
	char *size;

	firstline = read_first_line(result, length_to_newline(result));
	space = read_space(firstline);
	obstacle = read_obstacle(firstline);
	filler = read_filled(firstline);
	size = read_obstacle_size("map.ob");
	write_debug("debug.log", "Space : ");
	write_debug_char("debug.log", space);
	write_debug("debug.log", "\n");
	write_debug("debug.log", "Obstacle : ");
	write_debug_char("debug.log", obstacle);
	write_debug("debug.log", "\n");
	write_debug("debug.log", "Filler : ");
	write_debug_char("debug.log", filler);
	write_debug("debug.log", "\n");
	write_debug("debug.log", "Size : ");
	write_debug("debug.log", size);
	write_debug("debug.log", "\n\n\n");
	write_debug("debug.log", "Inital grid: ");
	write_debug("debug.log", "\n\n");	
	write_debug("debug.log", result);
	write_debug("debug.log", "\n\n");
	write_debug("debug.log", "Completed grid: \n");
}
