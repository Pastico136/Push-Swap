/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:32:09 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 13:46:56 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacknode	*new_node(int value)
{
	t_stacknode	*node;

	node = malloc(sizeof(t_stacknode));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->previous = NULL;
	node->next = NULL;
	return (node);
}
