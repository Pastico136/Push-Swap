/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:29:56 by paco              #+#    #+#             */
/*   Updated: 2026/01/15 15:33:15 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_stack(t_stack *a, t_stack *b)
{
    t_stacknode *node1;
    t_stacknode *node2;
    
    if ((!a || a->length < 2) && (!b || b->length < 2))
        return ;
    if (a && a->length >= 2)
    {
        node1 = stack_pop_front(a);
        node2 = stack_pop_front(a);
        stack_push_front(a, node1);
        stack_push_front(a, node2);
    }
    if (b && b->length >= 2)
    {
        node1 = stack_pop_front(b);
        node2 = stack_pop_front(b);
        stack_push_front(b, node1);
        stack_push_front(b, node2);
    }
    write(1, "ss\n", 3);
}
