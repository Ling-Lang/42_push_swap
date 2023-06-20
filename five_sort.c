/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:51:39 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 02:22:30 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_five_sort(t_stack **a, t_stack **b, int *arr)
{
    ft_find_min(a, arr, 0, 5);
    pb(a, b);
    
    ft_find_min(a, arr, 1, 5);
    pb(a, b);
    three_sort_a(a);
    pa(b, a);
    pa(b, a);
}