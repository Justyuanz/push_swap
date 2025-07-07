/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:15:57 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/07 21:19:58 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_vec	stack_a;
	t_vec	stack_b;

	if (input_valid(argc, argv) == false)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (stack_init(&stack_a, &stack_b))
	{
		return (write(2, "Error\n", 6));
	}
	else
	{
		if (!arg_to_vec(&stack_a, argv))
			destroy_and_exit(&stack_a, &stack_b);
		sorting_algo(&stack_a, &stack_b, argc);
	}
	vec_free(&stack_a);
	vec_free(&stack_b);
	return (0);
}
