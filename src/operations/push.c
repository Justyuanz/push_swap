/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:16:17 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:16:19 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_vec *stack_b, t_vec *stack_a)
{
	if (!stack_b || !stack_b->memory || stack_b->len == 0)
		return ;
	vec_push_front(stack_a, vec_get(stack_b, 0));
	vec_pop_front(stack_b);
	write(1, "pa\n", 3);
}

void	ft_pb(t_vec *stack_a, t_vec *stack_b)
{
	if (!stack_a || !stack_a->memory || stack_a->len == 0)
		return ;
	vec_push_front(stack_b, vec_get(stack_a, 0));
	vec_pop_front(stack_a);
	write(1, "pb\n", 3);
}
