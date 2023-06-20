/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:33 by dylan             #+#    #+#             */
/*   Updated: 2023/06/20 12:26:05 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/src/libft.h"

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*previous;
	int				order;
	int				content;

}					t_stack;
void				ft_add_content(t_stack **lst, int content_to_add);
void				ft_fill_list(t_stack **lst, int argc, char *argv[]);
t_stack				*ft_stacknew(int content);
void				ft_stackadd_back(t_stack **stack, t_stack *new_node);
void				ft_init(int argc, char **argv, int i, int len);
void				ft_lstorder(t_stack **a, int *c);
void				ft_find_min(t_stack **a, int *c, int order, int arg);
void				ft_free(t_stack **a, t_stack **b, int *c);
int					is_sorted(t_stack **a, int *arr);
int					ft_stack_size(t_stack **stack);
void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);
void				ss(t_stack **stack_a, t_stack **stack_b);
void				pa(t_stack **stack_b, t_stack **stack_a);
void				pb(t_stack **stack_a, t_stack **stack_b);
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);
void				rr(t_stack **stack_a, t_stack **stack_b);
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);
void				rrr(t_stack **stack_a, t_stack **stack_b);
void				sort(t_stack **stack_a, t_stack **stack_b, int size,
						int *arr);
void				two_sort_a(t_stack **a);
void				ft_five_sort(t_stack **a, t_stack **b, int *arr);
void				three_sort_a(t_stack **a);
void				three_sort_b(t_stack **b);
void				ft_four_sort(t_stack **a, t_stack **b, int *arr);
void				insertion_sort(int *arr, int n);
void				check_error(int *c, int size);
void				check_digits(char **argv, int i);
void				sort_big_stack(t_stack **a, t_stack **b, int size);
void				ft_error(void);

#endif