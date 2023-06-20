/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_r.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:45:00 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 12:34:04 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack **stack_a)
{
	t_stack	*first_node;
	t_stack	*current_node;

	if (*stack_a && (*stack_a)->next)
	{
		first_node = *stack_a;
		*stack_a = (*stack_a)->next;
		(*stack_a)->previous = NULL;
		first_node->next = NULL;
		current_node = *stack_a;
		while (current_node->next)
		{
			current_node = current_node->next;
		}
		current_node->next = first_node;
		first_node->previous = current_node;
		write(1, "ra\n", 3);
	}
}

void	rb(t_stack **stack_b)
{
	t_stack	*first_node;
	t_stack	*current_node;

	if (*stack_b && (*stack_b)->next)
	{
		first_node = *stack_b;
		*stack_b = (*stack_b)->next;
		(*stack_b)->previous = NULL;
		first_node->next = NULL;
		current_node = *stack_b;
		while (current_node->next)
		{
			current_node = current_node->next;
		}
		current_node->next = first_node;
		first_node->previous = current_node;
		write(1, "rb\n", 3);
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write(1, "rr\n", 3);
}
