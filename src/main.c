/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:39:50 by paco              #+#    #+#             */
/*   Updated: 2026/01/20 21:34:32 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
    t_stack a;
    t_stack b;
    char    **tabstr;

    stack_init(&a);
    stack_init(&b);
    tabstr = parsing_base(argc, argv);
    if (!tabstr)
        return (1);
    a = make_stack_a(tabstr);
    ft_free_tabstr(tabstr);
    ft_printf("A:\n");
    stack_print(&a);
    ft_printf("B:\n");
    stack_print(&b);
    put_index(&a);
    if (a.length <= 5)
        algo_small(&a, &b);
    else
        algo_base(&a, &b);
    ft_printf("After A:\n");
    stack_print(&a);
    ft_printf("After B:\n");
    stack_print(&b);
    stack_clear(&a);
    stack_clear(&b);
	return (0);
}
