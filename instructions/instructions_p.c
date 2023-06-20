/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:44:57 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 00:23:28 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_stack_add_front(t_stack **stack, t_stack *new)
{
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	if (!new)
		return ;
	new->next = *stack;
	*stack = new;
}
// void pb(t_stack **stack_a, t_stack **stack_b)
// {
//     if (*stack_a)
//     {
//         t_stack *move_node = *stack_a;
//         *stack_a = (*stack_a)->next;
//         if (*stack_a) (*stack_a)->previous = NULL;
//         move_node->next = *stack_b;
//         if (*stack_b) (*stack_b)->previous = move_node;
//         *stack_b = move_node;
//         write(1, "pb\n", 3);
//     }
// }
void	pa(t_stack **a, t_stack **b)
{
	t_stack	*stack;

	if (*b == NULL)
		return ;
	stack = *b;
	*b = stack->next;
	stack->next = NULL;
	ft_stack_add_front(a, stack);
	write(1, "pa\n", 3);
}
// void pa(t_stack **stack_b, t_stack **stack_a) {
//     t_stack *temp;

//     // Check if stack_b is not empty
//     if (*stack_b != NULL) {
//         // Save the top node of stack_b
//         temp = *stack_b;

//         // Move the top of stack_b to the next node
//         *stack_b = (*stack_b)->next;

//         // Push the saved node to the top of stack_a
//         temp->next = *stack_a;
//         *stack_a = temp;
//     }
// }

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*stack;

	if (*a == NULL)
		return ;
	stack = *a;
	*a = stack->next;
	stack->next = NULL;
	ft_stack_add_front(b, stack);
	write(1, "pb\n", 3);
}



