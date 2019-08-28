/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   read_obstacle_file.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 16:12:10 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/28 02:56:53 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"
#include "basic_functions.h"
#include "read_write_obstacle_file.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char	read_obstacle_file(char *filename, char *find)
{
	char *input;

	input = read_file(filename);
	if (ft_strcmp(find, "size") == 0)
		return (read_space(input));
	if (ft_strcmp(find, "obstacle") == 0)
		return (read_obstacle(input));
	if (ft_strcmp(find, "filler") == 0)
		return (read_filled(input));

	return ('0');
}

char	*read_obstacle_size(char *filename)
{
	char *input;
	char *result;

	input = read_file(filename);
	result = read_size(input);
	return (result);
}
