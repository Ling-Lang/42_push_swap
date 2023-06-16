/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_r2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:44:55 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/16 12:01:30 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_stack **stack_a)
{
    t_stack *last;
    t_stack *current;

    if (*stack_a == NULL || (*stack_a)->next == NULL)
        return ;
    current = *stack_a;
    while (current->next != NULL)
        current = current->next;
    last = current;
    current->previous->next = NULL;
    last->next = *stack_a;
    (*stack_a)->previous = last;
    *stack_a = last;
    printf("rra\n");
}

void rrb(t_stack **stack_b)
{
    t_stack *last;
    t_stack *current;

    if (*stack_b == NULL || (*stack_b)->next == NULL)
        return ;
    current = *stack_b;
    while (current->next != NULL)
        current = current->next;
    last = current;
    current->previous->next = NULL;
    last->next = *stack_b;
    (*stack_b)->previous = last;
    *stack_b = last;
    printf("rrb\n");
}

void rrr(t_stack **stack_a, t_stack **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
}