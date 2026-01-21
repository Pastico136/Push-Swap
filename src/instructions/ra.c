/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:10:46 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 13:47:53 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *a)
{
	t_stacknode	*node;

	if (!a || a->length < 2)
		return ;
	node = stack_pop_front(a);
	stack_push_back(a, node);
	write(1, "ra\n", 3);
}
