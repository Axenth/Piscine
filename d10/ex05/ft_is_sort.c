/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/19 17:58:30 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/19 18:02:34 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (tab)
	{
		if (f(tab[i], i + 1) > 0)
		{
			return (0);
		}
	}
	return (1);
}
