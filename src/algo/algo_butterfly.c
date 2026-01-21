/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_butterfly.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:27:34 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 13:47:59 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_init(t_stack *a, int *chunk)
{
	if (a->length <= 100)
		*chunk = 20;
	else if (a->length <= 500)
		*chunk = 35;
	else
		*chunk = 45;
}

void	algo_put_int_b(t_stack *a, t_stack *b)
{
	int			i;
	int			chunk;
	t_stacknode	*node;

	chunk_init(a, &chunk);
	i = 0;
	while (a->length > 0)
	{
		node = a->start;
		if (node->index <= i)
		{
			push_b(a, b);
			rotate_b(b);
			i++;
		}
		else if (node->index <= i + chunk)
		{
			push_b(a, b);
			i++;
		}
		else
			rotate_a(a);
	}
}

int	search_biggest(t_stack *b, t_stacknode *node_comp)
{
	t_stacknode	*node;

	node = b->start;
	while (node)
	{
		if (node->index > node_comp->index)
			return (0);
		node = node->next;
	}
	return (1);
}

void	algo_put_in_a(t_stack *a, t_stack *b, int pos_max)
{
	int	i;

	i = b->length - pos_max;
	if (pos_max <= b->length / 2)
	{
		while (pos_max > 0)
		{
			rotate_b(b);
			pos_max--;
		}
		push_a(a, b);
	}
	else
	{
		while (i > 0)
		{
			reverse_rotate_b(b);
			i--;
		}
		push_a(a, b);
	}
}

void	algo_base(t_stack *a, t_stack *b)
{
	int			pos_max;
	t_stacknode	*node;

	algo_put_int_b(a, b);
	while (b->length > 0)
	{
		pos_max = 0;
		node = b->start;
		while (node)
		{
			if (search_biggest(b, node) == 1)
				break ;
			node = node->next;
			pos_max++;
		}
		algo_put_in_a(a, b, pos_max);
	}
}
