/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:36:36 by jkulka            #+#    #+#             */
/*   Updated: 2023/05/19 13:38:47 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_init(int argc, char *argv[])
{
  t_list *stack_a;

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