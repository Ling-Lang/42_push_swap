/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:39 by dylan             #+#    #+#             */
/*   Updated: 2023/06/19 18:43:53 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort(t_stack **stack_a, t_stack **stack_b, int size)
{
    int tmp_size;
    
    tmp_size = size;
    if(size == 2)
        two_sort_a(stack_a);
    else if (size == 3)
	{
		three_sort_a(stack_a);
	}
	else if (size == 5)
    {
        ft_five_sort(stack_a, stack_b);
    }
    else
    {
        // tmp_size = size;
        split_sort(stack_a, stack_b, size);
        // printf("size: %d\n", tmp_size);
        // simple_sort(&stack_a, &stack_b, size);
    }
    return ;
}

void split_sort(t_stack **a, t_stack **b, int size)
{
    const int chunk_size = 3;
    int chunk_num;
    int i = 0;
    int j = 0;

    if (size % chunk_size != 0)
    {
        return ;
    }
    chunk_num = size / chunk_size;
    while (i < chunk_num)
    {
        while (j < chunk_size)
        {
            pb(a, b);
            j++;
        }
        three_sort_b(b);
        j = 0;
        while (j < chunk_size)
        {
            pa(b, a);
            j++;
        }
        j = 0;
        while (j < chunk_size)
        {
            rra(a);
            j++;
        }
        j = 0;
        i++;
    }
}

void simple_sort(t_stack **stack_a, t_stack **stack_b, int size)
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