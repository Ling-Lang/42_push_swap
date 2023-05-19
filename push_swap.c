/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:39 by dylan             #+#    #+#             */
/*   Updated: 2023/05/18 18:34:41 by dylan            ###   ########.fr       */
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





