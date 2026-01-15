/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:17:15 by paco              #+#    #+#             */
/*   Updated: 2026/01/15 15:27:03 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_a(t_stack *a)
{
    t_stacknode *node1;
    t_stacknode *node2;

    if (!a || a->length < 2)
        return ;
    node1 = stack_pop_front(a);
    node2 = stack_pop_front(a);
    stack_push_front(a, node1);
    stack_push_front(a, node2);
    write(1, "sa\n", 3);
}
