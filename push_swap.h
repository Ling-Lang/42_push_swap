/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:33 by dylan             #+#    #+#             */
/*   Updated: 2023/06/19 18:44:55 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/src/libft.h"

# define RED "\e[0;31m"
# define YEL "\e[0;33m"
# define WHT "\e[0;37m"
# define BLU "\e[0;34m"

typedef struct s_stack
{
    struct s_stack *next;
    struct s_stack *previous;
    int content;
    
}   t_stack;
void ft_add_content(t_stack **lst, int content_to_add);
void ft_fill_list(t_stack **lst, int argc, char *argv[]);
void print_list(t_stack *lst);
t_stack *ft_init(int argc, char *argv[]);
void sa(t_stack **stack_a);
void sb(t_stack **stack_b);
void ss(t_stack **stack_a, t_stack **stack_b);
void pa(t_stack **stack_b, t_stack **stack_a);
void pb(t_stack **stack_a, t_stack **stack_b);
void ra(t_stack **stack_a);
void rb(t_stack **stack_b);
void rr(t_stack **stack_a, t_stack **stack_b);
void rra(t_stack **stack_a);
void rrb(t_stack **stack_b);
void rrr(t_stack **stack_a, t_stack **stack_b);
void sort(t_stack **stack_a, t_stack **stack_b, int size);
int list_size(t_stack *stack);
void split_sort(t_stack **a, t_stack **b, int size);
void	three_sort_a(t_stack **a);
void	three_sort_b(t_stack **b);
bool is_empty(t_stack *stack);
void simple_sort(t_stack **stack_a, t_stack **stack_b, int size);
bool is_sorted(t_stack *stack);
void two_sort_a(t_stack **a);
void two_sort_b(t_stack **b);
void ft_five_sort(t_stack **a, t_stack **b);
#endif