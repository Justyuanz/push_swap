#include "push_swap.h"

static bool check_sorted(t_vec *stack_a)
{
	size_t	i;
	size_t	count;
	size_t	j;

	i = stack_a->len;
	count = 0;
	j = 0;
	while (j < i)
	{
		if(stack_a->memory[j] < stack_a->memory[j + 1])
			count++;
		j++;
	}
	if (count == j)
		return(true);
	return (false);
}

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
	if (!stack_a)
		destroy_and_exit(stack_a, stack_b);
	if (check_sorted(stack_a))
		return;
	//find smallest push to b and sort three then push back
}
bool sorting_algo(t_vec *stack_a, t_vec *stack_b, int argc)
{
	if (argc == 3)
		sort_two(stack_a, stack_b);
	if (argc == 4)
		sort_three (stack_a, stack_b);
	return (true);
}