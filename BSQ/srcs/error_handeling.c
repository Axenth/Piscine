/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handeling.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 13:41:26 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/26 18:11:19 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"
#include "general.h"

void	error_handeling(int error)
{
	if (error == 0)
		ft_putstr("Invalid Input\n");
	if (error == 1)
		ft_putstr("no input\n");
	if (error == 2)
		ft_putstr("map error\n");
	if (error == 3)
		ft_putstr("No valid square\n");
	if (error == 4)
		ft_putstr("open() / close() failed\n");
}
