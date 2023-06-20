/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:44:57 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 11:54:28 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*stack;

	if (*b == NULL)
		return ;
	stack = *b;
	*b = stack->next;
	if (*b != NULL)
		(*b)->previous = NULL;
	stack->next = *a;
	if (*a != NULL)
		(*a)->previous = stack;
	*a = stack;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*stack;

	if (*a == NULL)
		return ;
	stack = *a;
	*a = stack->next;
	if (*a != NULL)
		(*a)->previous = NULL;
	stack->next = *b;
	if (*b != NULL)
		(*b)->previous = stack;
	*b = stack;
	write(1, "pb\n", 3);
}
