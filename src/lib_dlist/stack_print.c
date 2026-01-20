/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:34:53 by paco              #+#    #+#             */
/*   Updated: 2026/01/20 14:48:04 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    stack_print(t_stack *stack)
{
    t_stacknode *node;
    node = stack->start;
    while (node)
    {
        ft_printf("Index = %d\nValue = [%d]\n\n", node->index, node->value);
        node = node->next;
    }
}
