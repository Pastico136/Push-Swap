/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:20:11 by paco              #+#    #+#             */
/*   Updated: 2026/01/15 14:45:00 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate_b(t_stack *b)
{
    t_stacknode *node;

    if (!b || b->length < 2)
        return ;
    node = stack_pop_front(b);
    stack_push_back(b, node);
    write(1, "rb\n", 3);
}
