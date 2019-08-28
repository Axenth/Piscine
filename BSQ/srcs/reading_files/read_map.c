/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   read_map.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:48:14 by nvan-der       #+#    #+#                */
/*   Updated: 2019/08/28 09:15:58 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"
#include "basic_functions.h"
#include "read_write_obstacle_file.h"
#include "test_functions.h"

char	read_map_info(char *mapstr)
{
	int		i;
	int		co;
	char	obstacle;

	obstacle = read_obstacle_file("map.ob", "obstacle");
	i = 0;
	co = 0;
	while (mapstr[i] != '\0')
	{
		if (mapstr[i] == obstacle)
			co++;
		i++;
	}
	return (co);
}

/*void	save_obstacle_x_y(char **map)
{
	int		x;
	int		y;
	int		length;
	char	obstacle;

	obstacle = read_obstacle_file("map.ob", "obstacle");
	length = length_map();
	x = 0;
	y = 0;
	while (y != length)
	{
		while (map[y][x] != '\n')
		{
			if (map[y][x] == obstacle)
				write_obstacle_coord_file("map.co", y, x);
			x++;
		}
		x = 0;
		y++;
	}
}*/

int		length_map()
{
	char *size;

	size = read_obstacle_size("map.ob");
	return (ft_atoi(size));
}

/* char	check_all_line_lenght()
{
	cheack if all lines of the map are the same size.
}*/
