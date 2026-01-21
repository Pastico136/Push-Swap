/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:17:47 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 15:03:40 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_stack *a)
{
	t_stacknode	*node;

	node = a->start->next;
	if (node->previous->index > node->index
		&& node->previous->index > node->next->index)
		rotate_a(a);
	else if (node->index > node->previous->index
		&& node->index > node->next->index)
		reverse_rotate_a(a);
	node = a->start;
	if (node->index > node->next->index)
		swap_a(a);
}

void	sort4(t_stack *a, t_stack *b)
{
	int			i;
	t_stacknode	*node;

	i = 0;
	node = a->start;
	while (node->index != 0)
	{
		node = node->next;
		i++;
	}
	if (i == 1)
		rotate_a(a);
	else if (i == 2)
	{
		rotate_a(a);
		rotate_a(a);
	}
	else if (i == 3)
		reverse_rotate_a(a);
	push_b(a, b);
	sort3(a);
	push_a(a, b);
}

void	sort5(t_stack *a, t_stack *b)
{
	while (b->length < 2)
	{
		if (a->start->index < 2)
			push_b(a, b);
		else
			rotate_a(a);
	}
	sort3(a);
	if (b->start->index == 0)
		swap_b(b);
	push_a(a, b);
	push_a(a, b);
}

void	algo_small(t_stack *a, t_stack *b)
{
	t_stacknode	*node;

	node = a->start;
	if (a->length == 1)
		return ;
	else if (a->length == 2)
	{
		if (node->next->index < node->index)
			swap_a(a);
	}
	else if (a->length == 3)
		sort3(a);
	else if (a->length == 4)
		sort4(a, b);
	else if (a->length == 5)
		sort5(a, b);
	return ;
}
