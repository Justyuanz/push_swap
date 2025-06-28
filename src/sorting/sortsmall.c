#include "push_swap.h"

static void sort_two(t_vec *stack_a, t_vec *stack_b)
{
	if (!stack_a)
		destroy_and_exit(stack_a, stack_b);
	if (*vec_get(stack_a, 0) > *vec_get(stack_a, 1))
		ft_sa(stack_a);
}

static void sort_three(t_vec *stack_a, t_vec *stack_b)
{
	if (!stack_a)
		destroy_and_exit(stack_a, stack_b);
	if (check_sorted(stack_a))
		return;
	if (stack_a->memory[1] > stack_a->memory[2])
		ft_sa(stack_a);
	if (stack_a->memory[0] > stack_a->memory[1])
		ft_ra(stack_a);
	if (stack_a->memory[1] > stack_a->memory[2])
		ft_sa(stack_a);
}

static void sort_four(t_vec *stack_a, t_vec *stack_b)
{
	int i;

	if (!stack_a)
		destroy_and_exit(stack_a, stack_b);
	if (check_sorted(stack_a))
		return;
	i = find_max(stack_a);
	if (i == 0)
		ft_ra(stack_a);
	if (i == 2)
		ft_sa(stack_a);
	if (i == 1)
	{
		ft_pb(stack_a, stack_b);
	}
	ft_pb(stack_a, stack_b);
	sort_three(stack_a, stack_b);
	ft_pa(stack_b,stack_a);
}

bool sorting_algo(t_vec *stack_a, t_vec *stack_b, int argc)
{
	if (argc == 3)
		sort_two(stack_a, stack_b);
	if (argc == 4)
		sort_three(stack_a, stack_b);
	if (argc == 5)
		sort_four(stack_a, stack_b);
	return (true);
}