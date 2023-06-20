/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:36:36 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 12:13:02 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(int argc, char **argv, int i, int len)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*new;
	int		*arr;
	int		j;

	a = NULL;
	b = NULL;
	if (len != 0)
		arr = malloc(sizeof(int) * (argc));
	else
		arr = malloc(sizeof(int) * (argc - 1));
	if (arr == NULL)
		exit(1);
	j = -1;
	while (i < argc)
	{
		check_digits(argv, i);
		arr[++j] = ft_atoi(argv[i]);
		new = ft_stacknew(ft_atoi(argv[i]));
		ft_stackadd_back(&a, new);
		i++;
	}
	sort(&a, &b, ft_stack_size(&a), arr);
	ft_free(&a, &b, arr);
}

void	ft_add_content(t_stack **lst, int content_to_add)
{
	t_stack	*node;
	t_stack	*last_node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->content = content_to_add;
	node->next = NULL;
	node->previous = NULL;
	if (*lst == NULL)
	{
		*lst = node;
		return ;
	}
	last_node = *lst;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = node;
	node->previous = last_node;
}
