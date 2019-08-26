/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   general.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:42:45 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/26 19:24:29 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERAL_H
# define GENERAL_H

# include <stdlib.h>

void	error_handeling(int error);
char	*read_file(char *file_name);
//void	read_map_info(char *map);
char	**convert_to_array(char *str);
void	test_print(char *map);

/*REMOVE BEFORE SUBMITTING! */
void	test_print(char *map);

#endif