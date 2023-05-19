/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:29 by dylan             #+#    #+#             */
/*   Updated: 2023/05/18 18:34:29 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include "libft/src/libft.h"

int main(int argc, char *argv[])
{
  int i = argc;
  if(argc <= 2)
  {
    printf(RED"ERROR\n"WHT"Give at least 2 numbers"); 
    return 0;
  }
  t_list stack_a;
  while(i >= 1)
  {
    i--;
  }
  printf(BLU"LIST_SIZE = %d", ft_lstsize(&stack_a));

  return 0;
}
