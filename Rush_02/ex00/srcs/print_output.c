/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_output.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/25 11:26:08 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/25 13:53:53 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

void	print_output(char *rush_name, int horizontal
							, int vertical, int seperator)
{
	ft_putchar('[');
	ft_putstr(rush_name);
	ft_putstr("] [");
	ft_putnbr(horizontal);
	ft_putstr("] [");
	ft_putnbr(vertical);
	ft_putstr("]");
	if (seperator)
		ft_putstr(" || ");
	if (!seperator)
		ft_putchar('\n');
}
