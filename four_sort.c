/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 00:10:34 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 11:43:10 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_four_sort(t_stack **a, t_stack **b, int *arr)
{
	ft_find_min(a, arr, 0, 4);
	pb(a, b);
	three_sort_a(a);
	pa(b, a);
}
