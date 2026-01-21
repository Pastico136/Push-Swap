/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 20:47:06 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 15:10:19 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	make_stack_a(char **tabstr)
{
	t_stack		a;
	t_stacknode	*node;
	int			i;
	int			tab_value;

	i = 0;
	stack_init(&a);
	while (tabstr[i])
	{
		tab_value = ft_atoi(tabstr[i]);
		node = new_node(tab_value);
		stack_push_back(&a, node);
		i++;
	}
	return (a);
}
