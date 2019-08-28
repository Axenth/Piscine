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
	int count;

	i = 0;
	j = 0;
	e = 0;
	while (++count <= b)
	{
		if (count == 1 || count == b)
		{
			while (++i <= a)
				(i == 1 || i == a) ? ft_putchar('o') : ft_putchar('-');
			ft_putchar('\n');
		}
		i = 0;
		while (++e <= b - 2)
		{
			while (++j <= a)
				(j == 1 || j == a) ? ft_putchar('|') : ft_putchar(' ');
			ft_putchar('\n');
			j = 0;
		}
	}
}
