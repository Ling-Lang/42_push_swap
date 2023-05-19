/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:29 by dylan             #+#    #+#             */
/*   Updated: 2023/05/19 13:43:01 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
  t_list *stack_a;
  t_list *stack_b;
  stack_a = ft_init(argc, argv);
  print_list(stack_a);
  ft_printf("\nStack b:\n");
  // print_list(stack_b);
  return 0;
}
