/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_r.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:45:00 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/16 12:00:00 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack **stack_a)
{
    if (*stack_a && (*stack_a)->next)
    {
        t_stack *first_node = *stack_a;
        *stack_a = (*stack_a)->next;
        (*stack_a)->previous = NULL;
        first_node->next = NULL;

        t_stack *current_node = *stack_a;
        while (current_node->next)
        {
            current_node = current_node->next;
        }
        current_node->next = first_node;
        first_node->previous = current_node;
        printf("ra\n");
    }
}

void rb(t_stack **stack_b)
{
    if (*stack_b && (*stack_b)->next)
    {
        t_stack *first_node = *stack_b;
        *stack_b = (*stack_b)->next;
        (*stack_b)->previous = NULL;
        first_node->next = NULL;

        t_stack *current_node = *stack_b;
        while (current_node->next)
        {
            current_node = current_node->next;
        }
        current_node->next = first_node;
        first_node->previous = current_node;
        printf("rb\n");
    }
}

void rr(t_stack **stack_a, t_stack **stack_b)
{
    ra(stack_a);
    rb(stack_b);
}