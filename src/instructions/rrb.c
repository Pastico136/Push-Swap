/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:59:53 by paco              #+#    #+#             */
/*   Updated: 2026/01/15 15:01:55 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse_rotate_b(t_stack *b)
{
    t_stacknode *node;

    if (!b || b->length < 2)
        return ;
    node = stack_pop_back(b);
    stack_push_front(b, node);
    write(1, "rrb\n", 4);
}
