/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:36:36 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 02:50:41 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void 	ft_init(int argc, char *argv[])
// {
// 	t_stack	*stack_a;
// 	t_stack	*stack_b;
// 	int		i;
// 	int *arr;
// 	int j;

// 	i = 1;
// 	j = -1;
// 	stack_a = NULL;
// 	stack_b = NULL;
// 	arr = malloc(sizeof(int) * argc);
// 	ft_fill_list(&stack_a, argc, argv);
// 	while(i < argc)
// 	{
//     	// write(1, "A\n", 3);
// 		arr[++j] = ft_atoi(argv[i]);
// 		printf("Val arr[i]:%d", arr[i]);
// 		i++;
// 	}
//     sort(&stack_a, &stack_b, argc - 1, &arr);
// }
void 	ft_init(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;
	int *arr;
	int j;

	i = 1;
	j = -1;
	stack_a = NULL;
	stack_b = NULL;
	arr = malloc(sizeof(int) * argc);
	if (arr == NULL) {
		// fprintf(stderr, "Failed to allocate memory for arr\n");
		return;
	}
	ft_fill_list(&stack_a, argc, argv);
	while(i < argc)
	{
		arr[++j] = ft_atoi(argv[i]);
		if (j >= argc) {
			// fprintf(stderr, "Array index out of bounds\n");
			free(arr);
			return;
		}
		i++;
	}
	// print_list(stack_a);
    sort(&stack_a, &stack_b, argc - 1, arr);
    free(arr);
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

void	ft_fill_list(t_stack **lst, int argc, char *argv[])
{
	int j = 1;
	while (j < argc)
	{
		int data = atoi(argv[j]);
		ft_add_content(lst, data);
		j++;
	}
}