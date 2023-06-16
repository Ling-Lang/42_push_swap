/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:36:36 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/16 12:14:36 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_init(int argc, char *argv[])
{
  t_stack *stack_a;

  stack_a = NULL;
  if(argc <= 2)
  {
	printf(RED"ERROR\n"WHT"Give at least 2 numbers"); 
	return NULL;
  }
  ft_fill_list(&stack_a, argc, argv);
//   print_list(stack_a);
  return stack_a;
}

void ft_add_content(t_stack **lst, int content_to_add)
{
  t_stack *node;
  t_stack *last_node;

  node = malloc(sizeof(t_stack));
  if(!node)
    return ;
  node->content = content_to_add;
  node->next = NULL;
  node->previous = NULL;
  
  if(*lst == NULL)
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

void ft_fill_list(t_stack **lst, int argc, char *argv[])
{
    int j = 1;
    while(j < argc)
    {
        int data = atoi(argv[j]);
        ft_add_content(lst, data);
        j++;
    }
}