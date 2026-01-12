/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paco <paco@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:48:20 by parenvoi          #+#    #+#             */
/*   Updated: 2026/01/12 22:39:42 by paco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_stacknode
{
    int value;
    struct  s_stacknode *previous;
    struct  s_stacknode *next;
}   t_stacknode;

typedef struct s_stack
{
    int length;
    t_stacknode *start;
    t_stacknode *end;
}   t_stack;

t_stacknode *new_node(int value);
void    stack_init(t_stack *stack);
void    stack_add_back(t_stack *stack, t_stacknode *node);
t_stack    make_stack_a(char **tabstr);
void    stack_print(t_stack *stack);
void    stack_clear(t_stack *stack);
char	**split_arg(int argc, char **argv);
int	parser(char **tabstr);
int	check_nb(char **tabstr);
char	**parsing_base(int argc, char **argv);

#endif