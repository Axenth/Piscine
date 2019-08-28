/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   square_algo.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/28 11:45:42 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/28 15:11:25 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"
#include "general.h"
#include "read_write_obstacle_file.h"
#include "test_functions.h"

struct	coords
{
	int x;
	int y;
};

void	square_algo(char **map)
{
	char space;
	char obstacle


}

void	fill_square(char **map, char filler)
{
	
}

void	 find_obstacles(char **map, char obstacle, char *str)
{
	struct coords	*co;
	int				size;
	int				x;
	int				y;
	int				i;

	x = 0;
	y = 0;
	i = 0;
	size = count_obstacles(str, obstacle);
	co = malloc(sizeof(int) * size * 2);
	while (map[y] != '\n')
	{
		while (map[y][x] == obstacle)
		{
			co[i].y = y;
			co[i].x = x;
			x++;
		}
		x = 0;
		y++;
	}
}

int		count_obstacles(char *str, char obstacle)
{
	int i;
	int i2;

	i = 0;
	i2 = 0;

	while(str[i] != '\0')
	{
		if(str[i] == obstacle)
			i2++;
		i++;
	}

	return (i);
}
y:x