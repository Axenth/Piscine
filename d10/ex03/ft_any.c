/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_any.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/19 17:01:08 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/19 17:04:33 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			return (1);
	}
	return (0);
}
