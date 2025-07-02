/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:18:13 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:22:32 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_copy(int *copy, t_vec *stack_a)
{
	ssize_t	i;
	ssize_t	j;
	int		tmp;
	int		swapped;

	i = -1;
	while (++i < (ssize_t)stack_a->len)
		copy[i] = stack_a->memory[i];
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		j = -1;
		while (++j < stack_a->len - 1)
		{
			if (copy[j] > copy[j + 1])
			{
				swapped = 1;
				tmp = copy[j];
				copy[j] = copy[j + 1];
				copy[j + 1] = tmp;
			}
		}
		i++;
	}
}

static void	index_mapping(t_vec *stack_a)
{
	size_t	i;
	size_t	j;
	int		*copy;

	copy = malloc(stack_a->len * sizeof(int));
	if (!copy)
		return ;
	sort_copy(copy, stack_a);
	i = 0;
	while (i < stack_a->len)
	{
		j = 0;
		while (j < stack_a->len)
		{
			if (stack_a->memory[i] == copy[j])
			{
				stack_a->memory[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(copy);
}

void	radix_sort(t_vec *stack_a, t_vec *stack_b)
{
	int		i;
	size_t	j;
	int		bits;
	size_t	len_a;

	i = 0;
	len_a = stack_a->len;
	index_mapping(stack_a);
	bits = count_bits(find_max(stack_a));
	while (i < bits)
	{
		j = 0;
		while (j < len_a)
		{
			if (((stack_a->memory[0] >> i) & 1) == 0)
				ft_pb(stack_a, stack_b);
			else
				ft_ra(stack_a);
			j++;
		}
		while (stack_b->len)
			ft_pa(stack_b, stack_a);
		i++;
	}
}
