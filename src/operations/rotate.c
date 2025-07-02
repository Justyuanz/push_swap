/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:16:42 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:16:44 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate(t_vec *stack)
{
	int		tmp;
	size_t	i;

	i = 1;
	if (!stack || !stack->memory || stack->len == 0 || stack->len == 1)
		return ;
	tmp = stack->memory[0];
	while (i < stack->len)
	{
		stack->memory[i - 1] = stack->memory[i];
		i++;
	}
	stack->memory[stack->len - 1] = tmp;
}

void	ft_ra(t_vec *stack_a)
{
	if (!stack_a || !stack_a->memory || stack_a->len == 0 || stack_a->len == 1)
		return ;
	ft_rotate(stack_a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_vec *stack_b)
{
	if (!stack_b || !stack_b->memory || stack_b->len == 0 || stack_b->len == 1)
		return ;
	ft_rotate(stack_b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_vec *stack_a, t_vec *stack_b)
{
	if (!stack_a || !stack_a->memory || stack_a->len == 0 || stack_a->len == 1
		|| !stack_b || !stack_b->memory || stack_b->len == 0
		|| stack_b->len == 1)
		return ;
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	write(1, "rr\n", 3);
}
