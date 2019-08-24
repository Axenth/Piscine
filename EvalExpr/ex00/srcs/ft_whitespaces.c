/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_whitespaces.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 16:06:06 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/20 16:44:47 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		amount;
	int		i;

	str = strip_whitespace(str);
	amount = amount_words(str);
	result = malloc(sizeof(char*) * (amount + 1));
	i = 0;
	while (i < amount)
	{
		str = split_word(str, result, i);
		str = strip_whitespace(str);
		i++;
	}
	result[i] = 0;
	return (result);
}

int		amount_words(char *str)
{
	int	current_word;
	int	amount;

	current_word = 0;
	amount = 0;
	while (str[0] != '\0')
	{
		if (str[0] == ' ' || str[0] == '\n' || str[0] == '\t')
			current_word = 0;
		else if (str[0] != ' ' || str[0] != '\n' || str[0] != '\t')
		{
			if (current_word == 0)
				amount++;
			current_word++;
		}
		str++;
	}
	return (amount);
}

char	*split_word(char *str, char **dest, int index)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		i++;
	word = malloc((i + 1) * sizeof(char));
	i = 0;
	while (str[0] != '\0' && str[0] != ' ' && str[0] != '\n' && str[0] != '\t')
	{
		word[i] = str[0];
		str++;
		i++;
	}
	word[i] = '\0';
	dest[index] = word;
	return (str);
}

int		len_next_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		i++;
	return (i);
}

char	*strip_whitespace(char *str)
{
	while (str[0] != '\0' &&
			(str[0] == ' ' || str[0] == '\n' || str[0] == '\t'))
		str++;
	return (str);
}
