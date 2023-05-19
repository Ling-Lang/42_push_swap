/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:43:16 by jkulka            #+#    #+#             */
/*   Updated: 2023/05/19 13:43:16 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_list **stack_a)
{
    if (*stack_a && (*stack_a)->next)
    {
        void *tmp_content = (*stack_a)->content;
        (*stack_a)->content = (*stack_a)->next->content;
        (*stack_a)->next->content = tmp_content;
        ft_printf("sa\n");
    }
}

void sb(t_list **stack_b)
{
    if (*stack_b && (*stack_b)->next)
    {
        void *tmp_content = (*stack_b)->content;
        (*stack_b)->content = (*stack_b)->next->content;
        (*stack_b)->next->content = tmp_content;
        ft_printf("sb\n");

    }
}

void ss(t_list **stack_a, t_list **stack_b)
{
    sa(stack_a);
    sa(stack_b);
}


