/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_back.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 17:26:20 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/21 17:28:03 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_bck(t_list **begin_list, void *data)
{
	t_list *list;
	t_list *new;

	new = ft_create_elem(data);
	while (list->next)
		list = list->next;
	list->next = new;
}
