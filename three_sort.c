/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:28:55 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/19 18:43:09 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort_a(t_stack **a)
{
	int	last;
	int	first;
	int	second;
	// print_list(a);
	first = (*a)->content;
	second = (*a)->next->content;
	last = (*a)->next->next->content;

	if (first > second && second < last && last < first)
		ra(a);
	else if (first > second && second < last && last > first)
		sa(a);
	else if (first < second && second > last && last < first)
		rra(a);
	else if (first < second && second > last && last > first)
	{
		sa(a);
		ra(a);
	}
	else if (first > second && second > last && last < first)
	{
		sa(a);
		rra(a);
	}
	return ;
}
void	three_sort_b(t_stack **b)
{
	int	last;
	int	first;
	int	second;
	// print_list(a);
	first = (*b)->content;
	second = (*b)->next->content;
	last = (*b)->next->next->content;

	if (first > second && second < last && last < first)
		rb(b);
	else if (first > second && second < last && last > first)
		sb(b);
	else if (first < second && second > last && last < first)
		rrb(b);
	else if (first < second && second > last && last > first)
	{
		rb(b);
		sb(b);
		rrb(b);
	}
	else if (first > second && second > last && last < first)
	{
		sb(b);
		rrb(b);
	}
	return ;
}