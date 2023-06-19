/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:44:57 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/19 11:47:16 by jkulka           ###   ########.fr       */
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

void pa(t_stack *stack_b, t_stack *stack_a)
{
    if (stack_b)
    {
        t_stack *move_node = stack_b;
        stack_b = stack_b->next;
        move_node->next = stack_a;
        stack_a = move_node;
        write(1, "pa\n", 3);
    }
}