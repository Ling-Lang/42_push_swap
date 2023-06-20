/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 02:24:02 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 02:55:54 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_stack **a, t_stack **b, int size)
{
	int	i;
	int	j;
	int	num;
	int	max_num;
	int	max_bits;
	
	max_num = size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			num = (*a)->order;
			if (((num >> i) & 1) == 1)
				ra(a);
			else
			{
				pb(a, b);
			}
				
		}
		while ((*b));
			pa(b, a);
	}
}