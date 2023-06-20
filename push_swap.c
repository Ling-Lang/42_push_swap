/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:39 by dylan             #+#    #+#             */
/*   Updated: 2023/06/20 12:46:01 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack **stack_a, t_stack **stack_b, int size, int *arr)
{
	check_error(arr, size);
	insertion_sort(arr, size);
	if (is_sorted(stack_a, arr))
		return ;
	ft_lstorder(stack_a, arr);
	if (size == 2)
		two_sort_a(stack_a);
	else if (size == 3)
		three_sort_a(stack_a);
	else if (size == 4)
		ft_four_sort(stack_a, stack_b, arr);
	else if (size == 5)
		ft_five_sort(stack_a, stack_b, arr);
	else
		sort_big_stack(stack_a, stack_b, size);
	return ;
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	ft_init(argc, argv, 1, argc - 1);
	return (0);
}
