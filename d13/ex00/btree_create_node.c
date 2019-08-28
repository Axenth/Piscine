/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_create_node.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/23 12:42:55 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/23 12:44:43 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*new_btree;

	new_btree = malloc(sizeof(t_btree));
	new_btree->left = 0;
	new_btree->right = 0;
	new_btree->item = item;
	return (new_btree);
}
