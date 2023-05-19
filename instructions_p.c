/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:44:57 by jkulka            #+#    #+#             */
/*   Updated: 2023/05/19 13:44:57 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pb(t_list **stack_a, t_list **stack_b)
{
    if (*stack_a)
    {
        t_list *move_node = *stack_a;
        *stack_a = (*stack_a)->next;
        move_node->next = *stack_b;
        *stack_b = move_node;
        ft_printf("pb\n");

    }
}


void pa(t_list **stack_b, t_list **stack_a)
{
    if (*stack_b)
    {
        t_list *move_node = *stack_b;
        *stack_b = (*stack_b)->next;
        move_node->next = *stack_a;
        *stack_a = move_node;
        ft_printf("pb\n");

    }
}
