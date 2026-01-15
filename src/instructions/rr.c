/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:30:42 by paco              #+#    #+#             */
/*   Updated: 2026/01/15 14:44:56 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate_stack(t_stack *a, t_stack *b)
{
    t_stacknode *node;

    if ((!a || a->length < 2) && (!b || b->length < 2))
        return ;
    if (a && a->length >= 2)
    {
        node = stack_pop_front(a);
        stack_push_back(a, node);
    }
    if (b && b->length >= 2)
    {
        node = stack_pop_front(b);
        stack_push_back(b, node);
    }
    write(1, "rr\n", 3);
}
