/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/08 15:00:37 by jlensing      #+#    #+#                 */
/*   Updated: 2019/08/08 18:28:52 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	int i;
	int i2;

	i = 0;
	while (i <= 9)
	{
		i2 = i + '0';
		ft_putchar(i2);
		++i;
	}
}
