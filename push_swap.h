/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:34:33 by dylan             #+#    #+#             */
/*   Updated: 2023/05/19 13:39:12 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/src/libft.h"
# define RED "\e[0;31m"
# define YEL "\e[0;33m"
# define WHT "\e[0;37m"
# define BLU "\e[0;34m"
void ft_add_content(t_list **lst, void *content_to_add);
void print_list(t_list *lst);
void ft_fill_list(t_list **lst, int argc, char *argv[]);
t_list *ft_init(int argc, char *argv[]);
#endif