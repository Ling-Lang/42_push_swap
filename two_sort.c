/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:08:31 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/19 18:40:08 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void two_sort_a(t_stack **a)
{
    if ((*a)->content > (*a)->next->content)
    {
        sa(a);
    }
}

void two_sort_b(t_stack **b)
{
    if ((*b)->content > (*b)->next->content)
    {
        sb(b);
    }
}