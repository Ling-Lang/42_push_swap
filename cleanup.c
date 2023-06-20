/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:27:08 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 11:41:38 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_stackclear(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*element;

	element = *stack;
	tmp = NULL;
	if (!stack || !*stack)
		return ;
	while (element)
	{
		if (element->next)
			tmp = element->next;
		else
			tmp = NULL;
		if (element->content != 0)
			element->content = 0;
		if (element->order != 0)
			element->order = 0;
		free(element);
		element = tmp;
	}
	*stack = NULL;
}

void	ft_free(t_stack **a, t_stack **b, int *c)
{
	ft_stackclear(a);
	ft_stackclear(b);
	free(c);
	c = NULL;
}
