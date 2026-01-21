/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:27:41 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 13:47:44 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_stack *b)
{
	t_stacknode	*node1;
	t_stacknode	*node2;

	if (!b || b->length < 2)
		return ;
	node1 = stack_pop_front(b);
	node2 = stack_pop_front(b);
	stack_push_front(b, node1);
	stack_push_front(b, node2);
	write(1, "sb\n", 3);
}
