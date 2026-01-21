/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:04:20 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 14:15:36 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *a, t_stack *b)
{
	t_stacknode	*node;

	if (!b || b->length == 0)
		return ;
	node = stack_pop_front(b);
	stack_push_front(a, node);
	write(1, "pa\n", 3);
}
