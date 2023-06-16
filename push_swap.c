/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:39 by dylan             #+#    #+#             */
/*   Updated: 2023/06/16 12:15:59 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void mini_sort(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp_a;
    t_stack *tmp_b;
    tmp_a = *stack_a;
    tmp_b = *stack_b;
    int size;
    
    size = list_size(*stack_a);
    if(size == 2)
    {
        if(tmp_a->content > tmp_a->next->content)
        {
            sa(&tmp_a);
        }
    }
    else
    {
        simple_sort(&tmp_a, &tmp_b, size);
    }
    return ;
}

void simple_sort(t_stack **stack_a, t_stack **stack_b, int size)
{
    int i, j;
    t_stack *tmp;
    t_stack *min_node;

    for (i = 0; i < size; i++)
    {
        min_node = *stack_a;
        tmp = *stack_a;
        for (j = 0; j < size - i; j++)
        {
            if (tmp->content < min_node->content)
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

void insertion_sort(t_stack **stack_a, t_stack **stack_b, int size)
{
    int i, j;
    t_stack *tmp;
    t_stack *min_node;

    i = 0;
    while (i < size)
    {
        min_node = *stack_a;
        tmp = *stack_a;
        j = 0;
        while (j < size - i)
        {
            if (tmp->content < min_node->content)
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













