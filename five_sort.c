/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:51:39 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/19 18:57:36 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_five_sort(t_stack **a, t_stack **b)
{
    int i = 0;
    int size = 5;
    int chunk_size = 2;
    int chunk_num = size / chunk_size;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;

    while (i < chunk_num)
    {
        while (j < chunk_size)
        {
            pb(a, b);
            j++;
        }
        three_sort_b(b);
        j = 0;
        i++;
    }
    while (k < chunk_num)
    {
        pa(a, b);
        k++;
    }
    three_sort_a(a);
    while (l < chunk_num)
    {
        pb(a, b);
        l++;
    }
    three_sort_b(b);
    while (m < chunk_num)
    {
        pa(a, b);
        m++;
    }
    three_sort_a(a);
    while (n < chunk_num)
    {
        pb(a, b);
        n++;
    }
    three_sort_b(b);
    while (n < chunk_num)
    {
        pa(a, b);
        n++;
    }
    return ;
}