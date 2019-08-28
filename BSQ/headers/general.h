/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   general.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:42:45 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/28 09:15:58 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERAL_H
# define GENERAL_H

# include <stdlib.h>
# include <stdio.h>

void	error_handeling(int error);
char	*read_file(char *file_name);
char	**convert_to_array(char *str);
void	test_print(char *map);
char	*shorten_map(char *map);
//char	read_map_info(char *mapstr);
void	delete_file(char *filename);
void	check_square(char **map, int i, int j, char space, char obstacle);
void	alg_square(char **map, int size, int x,  int y);

#endif