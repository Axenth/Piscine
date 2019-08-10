/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/09 16:20:04 by jlensing      #+#    #+#                 */
/*   Updated: 2019/08/09 16:26:55 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	char    string[];
	int     i;

	string[0] = *str;
	string[1] = 4 + 0;
	string[2] = 2 + 0;
	i = 0;
	while (i <= 2)
	{
		ft_putchar(string[i]);
		i++;
	}
}
