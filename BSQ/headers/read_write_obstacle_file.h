/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   read_write_obstacle_file.h                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 16:19:52 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/27 20:31:20 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_WRITE_OBSTACLE_FILE
# define READ_WRITE_OBSTACLE_FILE

void	write_obstacle_file(char *filename, char *firstline);
char	read_obstacle_file(char *filename, char *find);
char	*read_first_line(char *map, int length_to_new_line);
char	read_space(char *first_line);
char	read_obstacle(char *first_line);
char	read_filled(char *first_line);
char	*read_size(char *first_line);
char	*read_obstacle_size(char *filename);

#endif