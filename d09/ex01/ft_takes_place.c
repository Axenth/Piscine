/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_takes_place.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/15 18:50:12 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/15 21:34:43 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_format(int i)
{
	if (i <= 11 || i >= 24)
		printf("%s", "A.M.");
	else if (i >= 12 && i < 24)
		printf("%s", "P.M.");
}

int		print_time(int i)
{
	if (i > 24)
	{
		printf("%d", 0);
		return (i - 24);
	}
	if (i == 0)
		return (12);
	else if (i >= 13 || i == 24)
		return (i - 12);
	else if (i < 10 && i > 0)
	{
		printf("%d", 0);
		return (i);
	}
	return (i);
}

void	ft_takes_place(int hour)
{
	if (hour > 24 || hour < 0)
		return ;
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d", print_time(hour));
	printf("%s", ".00 ");
	print_format(hour);
	printf("%s", " AND ");
	printf("%d", print_time(hour + 1));
	printf("%s", ".00 ");
	print_format(hour + 1);
	printf("\n");
}
