/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mpeerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 10:23:18 by mpeerdem      #+#    #+#                 */
/*   Updated: 2019/08/25 15:37:31 by mpeerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"
#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 30000

int		main(int argc, char **argv)
{
	char	*input;

	if (argc != 1)
		input = argv[1];
	else
	{
		input = read_input();
		if (!input)
			return (0);
	}
	check_rush(input);
	free(input);
	return (0);
}

char	*read_input(void)
{
	char	*input;
	char	*inputnext;
	int		size;

	input = (char*)malloc(BUF_SIZE + 1);
	size = read(0, input, BUF_SIZE);
	if (size == 0)
	{
		print_error(1);
		return (0);
	}
	input[size] = '\0';
	while (size != 0)
	{
		inputnext = (char*)malloc(BUF_SIZE + 1);
		size = read(0, inputnext, BUF_SIZE);
		inputnext[size] = '\0';
		input = str_cat(input, inputnext);
	}
	return (input);
}

char	*str_cat(char *s1, char *s2)
{
	int		i;
	int		j;
	int		size;
	char	*result;

	size = str_len(s1) + str_len(s2) + 1;
	result = (char*)malloc(sizeof(char) * size);
	result = str_cpy(result, s1);
	i = str_len(s1);
	j = 0;
	while (j < str_len(s2))
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	free(s2);
	return (result);
}
