/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_spy.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 01:46:11 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/16 12:26:04 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*lower_case(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 || str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}

char	*remove_spaces(char *str)
{
	int i;

	i = 0;
	while (str[0] != '\0' && str[0] == ' ')
	{
		while (str[i] != '\0')
		{
			str[i] = str[i + 1];
			i++;
		}
	}
	return (str);
}

void	print_alert(void)
{
	ft_putstr("Alert!!!\n");
}

int		main(int argc, char **argv)
{
	int i;
	int error;

	i = 0;
	error = 0;
	while (i < argc && error == 0)
	{
		if (ft_strcmp("president", lower_case(remove_spaces(argv[i]))))
			error = 1;
		if (ft_strcmp("attack", lower_case(remove_spaces(argv[i]))))
			error = 1;
		if (ft_strcmp("Bauer", lower_case(remove_spaces(argv[i]))))
			error = 1;
	}
	if (error == 1)
		print_alert();
}