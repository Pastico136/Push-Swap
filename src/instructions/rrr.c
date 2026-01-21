/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:02:41 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 13:47:48 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_stack(t_stack *a, t_stack *b)
{
	t_stacknode	*node;

	if ((!a || a->length < 2) && (!b || b->length < 2))
		return ;
	if (a && a->length >= 2)
	{
		node = stack_pop_back(a);
		stack_push_front(a, node);
	}
	if (b && b->length >= 2)
	{
		node = stack_pop_back(b);
		stack_push_front(b, node);
	}
	write(1, "rrr\n", 4);
}
