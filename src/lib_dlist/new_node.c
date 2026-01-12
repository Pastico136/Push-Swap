/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:32:09 by paco              #+#    #+#             */
/*   Updated: 2026/01/12 22:45:32 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacknode *new_node(int value)
{
    t_stacknode *node;

    node = malloc(sizeof(t_stacknode));
    if (!node)
        return (NULL);
    node->value = value;
    node->previous = NULL;
    node->next = NULL;
    return (node);
}
