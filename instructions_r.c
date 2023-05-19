/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_r.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:45:00 by jkulka            #+#    #+#             */
/*   Updated: 2023/05/19 13:45:00 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_list **stack_a)
{
    if (*stack_a && (*stack_a)->next)
    {
        t_list *first_node = *stack_a;
        *stack_a = (*stack_a)->next;
        first_node->next = NULL;

        t_list *current_node = *stack_a;
        while (current_node->next)
        {
            current_node = current_node->next;
        }
        current_node->next = first_node;
        ft_printf("ra\n");

    }
}

void rb(t_list **stack_b)
{
    if (*stack_b && (*stack_b)->next)
    {
        t_list *first_node = *stack_b;
        *stack_b = (*stack_b)->next;
        first_node->next = NULL;

        t_list *current_node = *stack_b;
        while (current_node->next)
        {
            current_node = current_node->next;
        }
        current_node->next = first_node;
        ft_printf("rb\n");

    }
}

void rr(t_list **stack_a, t_list **stack_b)
{
    rb(stack_b);
    ra(stack_a);
}