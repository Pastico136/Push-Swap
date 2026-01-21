/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:39:50 by paco              #+#    #+#             */
/*   Updated: 2026/01/21 16:15:50 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	is_sorted(t_stack *a)
{
	t_stacknode	*node;

	node = a->start;
	while (1)
	{
		if (!node->next)
			break ;
		if (node->next->value < node->value)
			return (0);
		node = node->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	char	**tabstr;

	tabstr = parsing_base(argc, argv);
	if (!tabstr)
		return (1);
	a = make_stack_a(tabstr);
	ft_free_tabstr(tabstr);
	if (is_sorted(&a))
	{
		stack_clear(&a);
		return (0);
	}
	stack_init(&b);
	put_index(&a);
	if (a.length <= 5)
		algo_small(&a, &b);
	else
		algo_base(&a, &b);
	stack_clear(&a);
	stack_clear(&b);
	return (0);
}
