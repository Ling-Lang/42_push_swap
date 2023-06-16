/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:33 by dylan             #+#    #+#             */
/*   Updated: 2023/06/16 12:14:21 by dylan            ###   ########.fr       */
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
void mini_sort(t_stack **stack_a, t_stack **stack_b);
void simple_sort(t_stack **stack_a, t_stack **stack_b, int size);
void insertion_sort(t_stack **stack_a, t_stack **stack_b, int size);
void reverseLinkedList(t_list **list);
int list_size(t_stack *stack);
#endif
