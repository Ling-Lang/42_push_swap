/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_r2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:44:55 by jkulka            #+#    #+#             */
/*   Updated: 2023/05/19 13:44:55 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_list **stack_a)
{
    t_list *last;
    t_list *current;

    if (*stack_a == NULL || (*stack_a)->next == NULL)
        return ;
    current = *stack_a;
    while (current->next->next != NULL)
        current = current->next;
    last = current->next;
    current->next = NULL;
    last->next = *stack_a;
    *stack_a = last;
    ft_printf("rra\n");
}

void rrb(t_list **stack_b)
{
    t_list *last;
    t_list *current;

    if (*stack_b == NULL || (*stack_b)->next == NULL)
        return ;
    current = *stack_b;
    while (current->next->next != NULL)
        current = current->next;
    last = current->next;
    current->next = NULL;
    last->next = *stack_b;
    *stack_b = last;
    ft_printf("rrb\n");
}

void rrr(t_list **stack_a, t_list **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
}