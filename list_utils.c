/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:45:12 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 11:45:14 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack != NULL)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	ft_lstorder(t_stack **a, int *c)
{
	int		i;
	t_stack	*stack;

	stack = *a;
	while (stack)
	{
		i = 0;
		while (stack->content != c[i])
			i++;
		stack->order = i;
		stack = stack->next;
	}
}

void	ft_find_min(t_stack **a, int *c, int order, int arg)
{
	t_stack	*lst;
	int		index;

	lst = (*a);
	index = 0;
	while (lst->content != c[order])
	{
		lst = lst->next;
		index++;
	}
	if (index > arg / 2)
	{
		while ((*a)->content != c[order])
			rra(a);
	}
	else
	{
		while ((*a)->content != c[order])
			ra(a);
	}
}
