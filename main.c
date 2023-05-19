/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:29 by dylan             #+#    #+#             */
/*   Updated: 2023/05/19 12:43:29 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
  int i = argc;
  int j = 1;
  int *data;
  t_list *stack_a;

  if(argc <= 2)
  {
    printf(RED"ERROR\n"WHT"Give at least 2 numbers"); 
    return 0;
  }
  while(j < i)
  {
    data = malloc(sizeof(int));
    *data = ft_atoi(argv[j]);
    ft_add_content(&stack_a, data);
    j++;
  }

  print_list(stack_a);
  return 0;
}
