/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handeling.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 14:25:07 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/21 17:20:12 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_error(int error)
{
	if (error == 0)
		ft_putstr("Unkown error.");
	if (error == 1)
		ft_putstr("File name missing.");
	if (error == 2)
		ft_putstr("Too many arguments.");
}
