/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:15:28 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/08 13:11:12 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	destroy_and_exit(t_vec *stack_a, t_vec *stack_b)
{
	vec_free(stack_a);
	vec_free(stack_b);
	write(2, "Error\n", 6);
	exit(1);
}

bool	stack_init(t_vec *stack_a, t_vec *stack_b)
{
	if (vec_new(stack_a, 2) == -1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (vec_new(stack_b, 2) == -1)
	{
		vec_free(stack_a);
		write(2, "Error\n", 6);
		exit(1);
	}
	return (true);
}

static bool	check_duplicate(t_vec *stack_a)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < stack_a->len)
	{
		j = i;
		while (j < stack_a->len - 1)
		{
			if (stack_a->memory[i] == stack_a->memory[j + 1])
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	arg_to_vec(t_vec *stack_a, char **argv)
{
	int	i;
	int	ret;
	int	error;

	i = 1;
	error = 0;
	while (argv[i])
	{
		ret = ft_atoi(argv[i], &error);
		if (error == -1)
			return (false);
		if (vec_push(stack_a, &ret) == -1)
			return (false);
		i++;
	}
	if (!check_duplicate(stack_a))
		return (false);
	return (true);
}
