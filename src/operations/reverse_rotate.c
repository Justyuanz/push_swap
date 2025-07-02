/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:16:29 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:16:33 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_reverse_rotate(t_vec *stack)
{
	int		tmp;
	size_t	i;

	if (!stack || !stack->memory || stack->len == 0 || stack->len == 1)
		return ;
	i = stack->len - 1;
	tmp = stack->memory[stack->len - 1];
	while (i)
	{
		stack->memory[i] = stack->memory[i - 1];
		i--;
	}
	stack->memory[0] = tmp;
}

void	ft_rra(t_vec *stack_a)
{
	if (!stack_a || !stack_a->memory || stack_a->len == 0 || stack_a->len == 1)
		return ;
	ft_reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_vec *stack_b)
{
	if (!stack_b || !stack_b->memory || stack_b->len == 0 || stack_b->len == 1)
		return ;
	ft_reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_vec *stack_a, t_vec *stack_b)
{
	if (!stack_a || !stack_a->memory || stack_a->len == 0 || stack_a->len == 1
		|| !stack_b || !stack_b->memory || stack_b->len == 0
		|| stack_b->len == 1)
		return ;
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
