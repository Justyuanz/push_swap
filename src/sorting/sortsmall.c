#include "push_swap.h"

void sort_small(t_vec *stack_a, t_vec *stack_b)
{
	if (!stack_a)
		destroy_and_exit(stack_a, stack_b);
	if(vec_get(stack_a, 0) > vec_get(stack_a, 1))
		ft_sa(stack_a);
}

bool sorting_algo(t_vec *stack_a, t_vec *stack_b, int argc);
{
	if (agc == 3)
		return (sort_small(stack_a));
}