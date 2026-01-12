/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:01:08 by paco              #+#    #+#             */
/*   Updated: 2026/01/12 22:45:29 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    stack_add_back(t_stack *stack, t_stacknode *node)
{
    if (!stack || !node)
        return ;
    if (stack->start == NULL)
    {
        stack->start = node;
        stack->end = node;
    }
    else
    {
        node->previous = stack->end;
        stack->end->next = node;
        stack->end = node;
    }
    stack->length++;
}
