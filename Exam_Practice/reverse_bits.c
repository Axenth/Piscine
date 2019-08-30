/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_bits.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/30 07:56:06 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/30 07:59:07 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char b)
{
	unsigned char	r;
	unsigned		byte_len = 8;

	while (byte_len)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
		byte_len--;
	}

	return (r);
}

int main(void)
{
	unsigned char r = '.';

	printf("%c", reverse_bits(r));

	return (0);
}