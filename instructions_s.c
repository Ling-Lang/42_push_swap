/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:43:16 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/16 11:52:15 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack **stack_a)
{
    if (*stack_a && (*stack_a)->next)
    {
        int tmp_content = (*stack_a)->content;
        (*stack_a)->content = (*stack_a)->next->content;
        (*stack_a)->next->content = tmp_content;
        printf("sa\n");
    }
}

void sb(t_stack **stack_b)
{
    if (*stack_b && (*stack_b)->next)
    {
        int tmp_content = (*stack_b)->content;
        (*stack_b)->content = (*stack_b)->next->content;
        (*stack_b)->next->content = tmp_content;
        printf("sb\n");
    }
}

void ss(t_stack **stack_a, t_stack **stack_b)

{
    sa(stack_a);
    sb(stack_b);
}


