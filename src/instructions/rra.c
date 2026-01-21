/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:49:32 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 13:47:50 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack *a)
{
	t_stacknode	*node;

	if (!a || a->length < 2)
		return ;
	node = stack_pop_back(a);
	stack_push_front(a, node);
	write(1, "rra\n", 4);
}
