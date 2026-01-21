/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:02:41 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 13:47:58 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	make_index(t_stack *a, t_stacknode *node_comp)
{
	t_stacknode	*node;
	int			index;

	index = a->length - 1;
	node = a->start;
	while (node)
	{
		if (node->value > node_comp->value)
			index--;
		node = node->next;
	}
	return (index);
}

void	put_index(t_stack *a)
{
	t_stacknode	*node;

	node = a->start;
	while (node)
	{
		node->index = make_index(a, node);
		node = node->next;
	}
}
