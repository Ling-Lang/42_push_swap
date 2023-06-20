/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:26:31 by jkulka            #+#    #+#             */
/*   Updated: 2023/06/20 12:35:24 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_putendl_fd("Error", 2);
	exit(EXIT_FAILURE);
}

int	is_sorted(t_stack **a, int *arr)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		if (tmp->content != arr[i])
			return (0);
		tmp = tmp->next;
		i++;
	}
	return (1);
}

void	check_error(int *c, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (c[i] == c[j] && i != j)
				ft_error();
			j++;
		}
		i++;
	}
}

void	check_digits(char **argv, int i)
{
	int		j;

	j = 0;
	if (argv[i][0] == '-')
	{
		j++;
		if (argv[i][1] == '\0')
			ft_error();
	}
	while (argv[i][j] != '\0')
	{
		if (ft_isdigit(argv[i][j]) == 0)
			ft_error();
		j++;
	}
}
