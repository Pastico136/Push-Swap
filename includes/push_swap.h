/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:48:20 by parenvoi          #+#    #+#             */
/*   Updated: 2026/01/21 13:43:00 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stacknode
{
	int					value;
	int					index;
	struct s_stacknode	*previous;
	struct s_stacknode	*next;
}						t_stacknode;

typedef struct s_stack
{
	int					length;
	t_stacknode			*start;
	t_stacknode			*end;
}						t_stack;

// stack management
t_stacknode				*new_node(int value);
void					stack_init(t_stack *stack);
t_stack					make_stack_a(char **tabstr);
void					stack_print(t_stack *stack);
void					stack_clear(t_stack *stack);

// utils
t_stacknode				*stack_pop_front(t_stack *stack);
t_stacknode				*stack_pop_back(t_stack *stack);
void					stack_push_front(t_stack *stack, t_stacknode *node);
void					stack_push_back(t_stack *stack, t_stacknode *node);

// instructions
void					swap_a(t_stack *a);
void					swap_b(t_stack *b);
void					swap_stack(t_stack *a, t_stack *b);
void					push_a(t_stack *a, t_stack *b);
void					push_b(t_stack *a, t_stack *b);
void					rotate_a(t_stack *a);
void					rotate_b(t_stack *b);
void					rotate_stack(t_stack *a, t_stack *b);
void					reverse_rotate_a(t_stack *a);
void					reverse_rotate_b(t_stack *b);
void					reverse_rotate_stack(t_stack *a, t_stack *b);

// algo
int						make_index(t_stack *a, t_stacknode *node_comp);
void					put_index(t_stack *a);
void					chunk_init(t_stack *a, int *chunk);
int						search_biggest(t_stack *b, t_stacknode *node_comp);
void					algo_put_int_b(t_stack *a, t_stack *b);
void					algo_put_in_a(t_stack *a, t_stack *b, int pos_max);
void					algo_base(t_stack *a, t_stack *b);
void					algo_small(t_stack *a, t_stack *b);
void					sort3(t_stack *a);
void					sort4(t_stack *a, t_stack *b);
void					sort5(t_stack *a, t_stack *b);

// parsing
char					**split_arg(int argc, char **argv);
int						parser(char **tabstr);
int						check_nb(char **tabstr);
char					**parsing_base(int argc, char **argv);

#endif