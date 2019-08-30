/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap_bit.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/28 17:00:33 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/28 17:04:59 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

unsigned char	swap_bit(unsigned char character)
{
	character = (character << 4) | (character >> 4);

	return (character);
}
