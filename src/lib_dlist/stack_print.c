/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:34:53 by paco              #+#    #+#             */
/*   Updated: 2026/01/12 23:09:04 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    stack_print(t_stack *stack)
{
    t_stacknode *node;
    node = stack->start;
    ft_printf("_____\n\nStack\n_____\n\n");
    while (node)
    {
        ft_printf("%d\n", node->value);
        node = node->next;
    }
}
