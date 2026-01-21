/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:30:01 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 13:46:42 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacknode	*stack_pop_front(t_stack *stack)
{
	t_stacknode	*node;

	if (!stack || stack->length == 0)
		return (NULL);
	if (stack->length == 1)
	{
		node = stack->start;
		node->next = NULL;
		node->previous = NULL;
		stack_init(stack);
		return (node);
	}
	node = stack->start;
	stack->start = node->next;
	stack->start->previous = NULL;
	node->previous = NULL;
	node->next = NULL;
	stack->length--;
	return (node);
}

void	stack_push_front(t_stack *stack, t_stacknode *node)
{
	if (!stack || !node)
		return ;
	if (stack->length == 0)
	{
		stack->start = node;
		stack->end = node;
		node->next = NULL;
		node->previous = NULL;
	}
	else
	{
		node->next = stack->start;
		stack->start->previous = node;
		node->previous = NULL;
		stack->start = node;
	}
	stack->length++;
}

t_stacknode	*stack_pop_back(t_stack *stack)
{
	t_stacknode	*node;

	if (!stack || stack->length == 0)
		return (NULL);
	if (stack->length == 1)
	{
		node = stack->start;
		node->next = NULL;
		node->previous = NULL;
		stack_init(stack);
		return (node);
	}
	node = stack->end;
	stack->end = node->previous;
	node->previous = NULL;
	node->next = NULL;
	stack->end->next = NULL;
	stack->length--;
	return (node);
}

void	stack_push_back(t_stack *stack, t_stacknode *node)
{
	if (!stack || !node)
		return ;
	if (stack->length == 0)
	{
		stack->start = node;
		stack->end = node;
		node->next = NULL;
		node->previous = NULL;
	}
	else
	{
		node->previous = stack->end;
		stack->end->next = node;
		stack->end = node;
	}
	stack->length++;
}
