/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 22:28:10 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 13:46:53 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_clear(t_stack *stack)
{
	t_stacknode	*node;
	t_stacknode	*next;

	node = stack->start;
	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
	stack_init(stack);
}
