/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:41:53 by paco              #+#    #+#             */
/*   Updated: 2026/01/15 14:45:06 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_b(t_stack *a, t_stack *b)
{
    t_stacknode *node;

    if (!a || a->length == 0)
        return ;
    node = stack_pop_front(a);
    stack_push_front(b, node);
    write(1, "pb\n", 3);
}
