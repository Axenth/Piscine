/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   amount_lines.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 11:27:51 by rpet          #+#    #+#                 */
/*   Updated: 2019/08/24 15:18:47 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		amount_lines(char *str)
{
	int i;
	int nlines;

	i = 0;
	nlines = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			nlines++;
		i++;
	}
	return (nlines);
}

int		length_to_newline(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	return (i);
}
