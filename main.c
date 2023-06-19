/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:29 by dylan             #+#    #+#             */
/*   Updated: 2023/06/19 11:14:05 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int main(int argc, char *argv[])
// {
//   t_list *stack_a;
//   t_list *stack_b;

//   int size;
//   // t_list *stack_b;
//   // size = malloc(sizeof(int));
//   stack_a = ft_init(argc, argv);
//   size = ft_lstsize(stack_a);
//   simple_sort(&stack_a, &stack_b, size);
//   print_list(stack_a);
//   return 0;
// }
int main(int argc, char *argv[]) {
    t_stack *stack_a;
    t_stack *stack_b = NULL; // Initialize stack_b to NULL

    int size;
    size = argc - 1; // The size of stack_a is argc - 1
    stack_a =  ft_init(argc, argv);
    sort(stack_a, stack_b);
    // print_list(stack_a);
    return 0;
}
