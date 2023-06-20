/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:43:16 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 12:34:29 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **stack_a)
{
	int	tmp_content;

	if (*stack_a && (*stack_a)->next)
	{
		tmp_content = (*stack_a)->content;
		(*stack_a)->content = (*stack_a)->next->content;
		(*stack_a)->next->content = tmp_content;
		write(1, "sa\n", 3);
	}
}

void	sb(t_stack **stack_b)
{
	int	tmp_content;

	if (*stack_b && (*stack_b)->next)
	{
		tmp_content = (*stack_b)->content;
		(*stack_b)->content = (*stack_b)->next->content;
		(*stack_b)->next->content = tmp_content;
		write(1, "sb\n", 3);
	}
}

void	ss(t_stack **stack_a, t_stack **stack_b)

{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}
