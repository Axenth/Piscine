/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handle.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/25 13:30:07 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/25 13:50:15 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

void	print_error(int error)
{
	if (error == 0)
		ft_putstr("Not a valid rush");
	if (error == 1)
		ft_putstr("Not a valid input");
	if (error == 2)
		ft_putstr("Not a valid rectangle");
	if (error == 3)
		ft_putstr("Not a valid square");
	ft_putchar('\n');
}
