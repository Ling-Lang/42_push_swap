/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:44:57 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/19 18:37:49 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void pb(t_stack **stack_a, t_stack **stack_b)
{
    if (*stack_a)
    {
        t_stack *move_node = *stack_a;
        *stack_a = (*stack_a)->next;
        if (*stack_a) (*stack_a)->previous = NULL;
        move_node->next = *stack_b;
        if (*stack_b) (*stack_b)->previous = move_node;
        *stack_b = move_node;
        write(1, "pb\n", 3);
    }
}
void pa(t_stack **stack_b, t_stack **stack_a) {
    t_stack *temp;

    // Check if stack_b is not empty
    if (*stack_b != NULL) {
        // Save the top node of stack_b
        temp = *stack_b;

        // Move the top of stack_b to the next node
        *stack_b = (*stack_b)->next;

        // Push the saved node to the top of stack_a
        temp->next = *stack_a;
        *stack_a = temp;
    }
}