/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   delete_file.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 16:11:32 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/27 20:19:38 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"
#include "basic_functions.h"
#include "read_write_obstacle_file.h"
#include <stdio.h>

void	delete_file(char *filename)
{
	remove(filename);
	return ;
}
