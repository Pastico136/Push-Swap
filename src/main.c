/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:39:50 by paco              #+#    #+#             */
/*   Updated: 2026/01/12 23:07:49 by paco             ###   ########.fr       */
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
    stack_print(&a);
    stack_clear(&a);
	return (0);
}
