/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:18:42 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:18:44 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_sorted(t_vec *stack_a)
{
	size_t	j;

	j = 0;
	while (j < stack_a->len)
	{
		if (stack_a->memory[j] > stack_a->memory[j + 1])
			break ;
		j++;
	}
	if (j == stack_a->len - 1)
		return (true);
	return (false);
}

int	find_min(t_vec *stack_a)
{
	int		min;
	int		j;
	size_t	i;

	i = 0;
	j = 0;
	min = stack_a->memory[0];
	while (i < stack_a->len)
	{
		if (stack_a->memory[i] < min)
		{
			min = stack_a->memory[i];
			j = i;
		}
		i++;
	}
	return (j);
}

int	count_bits(int num)
{
	int	i;

	i = 0;
	while (num)
	{
		num = num >> 1;
		i++;
	}
	return (i);
}

int	find_max(t_vec *stack_a)
{
	int		max;
	size_t	j;

	j = 0;
	max = stack_a->memory[0];
	while (j < stack_a->len)
	{
		if (stack_a->memory[j] > max)
			max = stack_a->memory[j];
		j++;
	}
	return (max);
}
