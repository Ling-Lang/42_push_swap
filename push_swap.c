/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:39 by dylan             #+#    #+#             */
/*   Updated: 2023/06/20 02:49:13 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort(t_stack **stack_a, t_stack **stack_b, int size, int *arr)
{
    insertionSort(arr, size);
   
    if(size == 2)
        two_sort_a(stack_a);
    else if (size == 3)
		three_sort_a(stack_a);
	else if (size == 4)
        ft_four_sort(stack_a, stack_b, arr);
    else if (size == 5)
        ft_five_sort(stack_a, stack_b, arr);
    else
    {
        sort_big_stack(stack_a, stack_b, size);
    }
    return ;
}
