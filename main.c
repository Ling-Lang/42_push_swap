/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:29 by dylan             #+#    #+#             */
/*   Updated: 2023/06/20 01:53:11 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[]) {

    if(argc < 2)
    {
        ft_putendl_fd("Error", 2);
    }
    ft_init(argc, argv);
    // sort(&stack_a, &stack_b, size, &arr);
    // print_list(stack_a);
    return 0;
}
