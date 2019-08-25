/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush_check.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mpeerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 14:51:31 by mpeerdem      #+#    #+#                 */
/*   Updated: 2019/08/25 15:05:19 by mpeerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"
#include <stdlib.h>

void	check_rush(char *input)
{
	char	**input_array;
	int		height;
	int		width;

	input_array = convert_to_array(input);
	height = amount_lines(input);
	width = str_len(input_array[0]);
	if (!is_rectangle(input_array))
	{
		print_error(0);
		return ;
	}
	if (is_rush(0, input_array))
		print_output("rush-00", width, height, 1);
	if (is_rush(1, input_array))
		print_output("rush-01", width, height, 1);
	if (is_rush(2, input_array))
		print_output("rush-02", width, height, 1);
	if (is_rush(3, input_array))
		print_output("rush-03", width, height, 1);
	if (is_rush(4, input_array))
		print_output("rush-04", width, height, 1);
	if (height == width)
		print_output("square", width, height, 1);
	print_output("rectangle", width, height, 0);
}

int		is_rush(int rushnum, char **box)
{
	char	*characters;
	char	*line;
	int		i;
	int		char_offset;

	characters = rush_chars(rushnum);
	i = 0;
	while (box[i])
	{
		char_offset = 3;
		line = box[i];
		if (i == 0)
			char_offset = 0;
		else if (!box[i + 1])
			char_offset = 6;
		if (!is_rush_line(characters, char_offset, line))
			return (0);
		i++;
	}
	return (1);
}

int		is_rush_line(char *characters, int char_offset, char *line)
{
	int		width;
	int		i;

	width = str_len(line);
	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			if (line[0] != characters[char_offset + 0])
				return (0);
		}
		else if (i == width - 1)
		{
			if (line[i] != characters[char_offset + 2])
				return (0);
		}
		else
		{
			if (line[i] != characters[char_offset + 1])
				return (0);
		}
		i++;
	}
	return (1);
}

char	*rush_chars(int rushnum)
{
	char	*result;

	result = (char*)malloc(sizeof(char) * 10);
	if (rushnum == 0)
		result = str_cpy(result, "o-o| |o-o");
	if (rushnum == 1)
		result = str_cpy(result, "/*\\* *\\*/");
	if (rushnum == 2)
		result = str_cpy(result, "ABAB BCBC");
	if (rushnum == 3)
		result = str_cpy(result, "ABCB BABC");
	if (rushnum == 4)
		result = str_cpy(result, "ABCB BCBA");
	result[9] = '\0';
	return (result);
}

char	*str_cpy(char *str, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
