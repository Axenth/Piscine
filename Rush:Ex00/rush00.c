/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrijgsm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/10 15:43:58 by dkrijgsm      #+#    #+#                 */
/*   Updated: 2019/08/10 15:44:01 by dkrijgsm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int a, int b)
{
	int i;
	int j;
	int e;

	i = 0;
	j = 0;
	e = 0;
	while (++j <= b)
	{
		if (j == 1 || j == b)
		{
			while (++i <= a)
				(i == 1 || i == a) ? ft_putchar('o') : ft_putchar('-');
			ft_putchar('\n');
		}
		i = 0;
		while (++e <= b - 2)
		{
			while (++i <= a)
				(i == 1 || i == a) ? ft_putchar('|') : ft_putchar(' ');
			ft_putchar('\n');
			i = 0;
		}
	}
}
