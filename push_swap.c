/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:39 by dylan             #+#    #+#             */
/*   Updated: 2023/05/23 11:01:51 by jkulka           ###   ########.fr       */
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

void bubble_sort(t_list **stack_a, t_list **stack_b, int size)
{
    int i = 0;
    int j = 0;
    t_list *tmp;

    while (i < size)
    {
        j = 0;
        while (j < size - i - 1)
        {
            tmp = *stack_a;
            if (tmp->content > tmp->next->content)
            {
                sa(stack_a); // Swap if the current element is greater than the next
            }
            ra(stack_a); // Rotate stack_a
            j++;
        }
        pb(stack_a, stack_b); // Push the largest element to stack_b
        i++;
    }

    while (i-- > 0)
    {
        pa(stack_a, stack_b); // Push all elements back to stack_a
    }
}







