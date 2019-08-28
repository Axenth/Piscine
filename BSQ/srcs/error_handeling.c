/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handeling.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:41:26 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/27 20:13:28 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"
#include "general.h"

void	error_handeling(int error)
{
	if (error == 0)
		ft_fd_putstr(2, "Invalid Input\n");
	if (error == 1)
		ft_fd_putstr(2, "No input\n");
	if (error == 2)
		ft_fd_putstr(2, "Map error\n");
	if (error == 3)
		ft_fd_putstr(2, "No valid square\n");
	if (error == 4)
		ft_fd_putstr(2, "open() failed\n");
	if (error == 5)
		ft_fd_putstr(2, "close() failed\n");
}
