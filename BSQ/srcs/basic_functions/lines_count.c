/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lines_count.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 19:48:31 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/27 14:10:55 by jlensing      ########   odam.nl         */
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
