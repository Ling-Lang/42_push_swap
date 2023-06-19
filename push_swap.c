/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:39 by dylan             #+#    #+#             */
/*   Updated: 2023/06/19 11:56:51 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort(t_stack *stack_a, t_stack *stack_b)
{

    int size;
    
    size = list_size(stack_a);
    if(size == 2)
    {
        if(stack_a->content > stack_a->next->content)
        {
            sa(&stack_a);
        }
    }
    else if (size == 3)
	{
		three_sort_a(stack_a);
	}
	else
    {
        split_sort(stack_a, stack_b, size);
    }
    return ;
}

// void simple_sort(t_stack **stack_a, t_stack **stack_b, int size)
// {
//     int i, j;
//     t_stack *tmp;
//     t_stack *min_node;

//     for (i = 0; i < size; i++)
//     {
//         min_node = *stack_a;
//         tmp = *stack_a;
//         for (j = 0; j < size - i; j++)
//         {
//             if (tmp->content < min_node->content)
//             {
//                 min_node = tmp;
//             }
//             ra(stack_a);
//             tmp = *stack_a;
//         }

//         while (*stack_a != min_node)
//         {
//             ra(stack_a);
//         }

//         pb(stack_a, stack_b);
//     }

//     for (i = 0; i < size; i++)
//     {
//         pa(stack_b, stack_a);
//     }
// }

// void insertion_sort(t_stack **stack_a, t_stack **stack_b, int size)
// {
//     int i, j;
//     t_stack *tmp;
//     t_stack *min_node;

//     i = 0;
//     while (i < size)
//     {
//         min_node = *stack_a;
//         tmp = *stack_a;
//         j = 0;
//         while (j < size - i)
//         {
//             if (tmp->content < min_node->content)
//             {
//                 min_node = tmp;
//             }
//             ra(stack_a);
//             tmp = *stack_a;
//             j++;
//         }

//         while (*stack_a != min_node)
//         {
//             ra(stack_a);
//         }

//         pb(stack_a, stack_b);
//         i++;
//     }

//     i = 0;
//     while (i < size)
//     {
//         pa(stack_b, stack_a);
//         i++;
//     }
// }

void split_sort(t_stack *a, t_stack *b, int size)
{
    const int chunk_size = 3;
    int chunk_num;
    int i = 0;
    int j = 0;

    if (size % chunk_size != 0)
    {
        return;
    }
    chunk_num = size / chunk_size;
    while (i < chunk_num)
    {
        while (j < chunk_size)
        {
            pb(&a, &b);
            j++;
        }
        three_sort_b(b);
        j = 0;
        while (j < chunk_size)
        {
            pa(&b, &a);
            j++;
        }
        j = 0;
        while (j < chunk_size)
        {
            rra(&a);
            j++;
        }
        j = 0;
        i++;
    }
}
