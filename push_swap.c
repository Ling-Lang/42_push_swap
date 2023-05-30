/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:39 by dylan             #+#    #+#             */
/*   Updated: 2023/05/30 11:25:51 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void simple_sort(t_list **stack_a, t_list **stack_b, int size)
{
    int i, j;
    t_list *tmp;
    t_list *min_node;

    for (i = 0; i < size; i++)
    {
        min_node = *stack_a;
        tmp = *stack_a;
        for (j = 0; j < size - i; j++)
        {
            if (*(int *)tmp->content < *(int *)min_node->content)
            {
                min_node = tmp;
            }
            ra(stack_a);
            tmp = *stack_a;
        }

        while (*stack_a != min_node)
        {
            ra(stack_a);
        }

        pb(stack_a, stack_b);
    }

    for (i = 0; i < size; i++)
    {
        pa(stack_b, stack_a);
    }
}

void insertion_sort(t_list **stack_a, t_list **stack_b, int size)
{
    int i, j;
    t_list *tmp;
    t_list *min_node;

    i = 0;
    while (i < size)
    {
        min_node = *stack_a;
        tmp = *stack_a;
        j = 0;
        while (j < size - i)
        {
            if (*(int *)tmp->content < *(int *)min_node->content)
            {
                min_node = tmp;
            }
            ra(stack_a);
            tmp = *stack_a;
            j++;
        }

        while (*stack_a != min_node)
        {
            ra(stack_a);
        }

        pb(stack_a, stack_b);
        i++;
    }

    i = 0;
    while (i < size)
    {
        pa(stack_b, stack_a);
        i++;
    }
}













