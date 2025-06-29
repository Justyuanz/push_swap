#include "push_swap.h"

bool check_sorted(t_vec *stack_a)
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

int find_max(t_vec *stack_a)
{
	int		max;
	int		j;
	size_t	i;

	i = 0;
	j = 0;
	max = stack_a->memory[0];
	while (i < stack_a->len)
	{
		if (stack_a->memory[i] > max)
		{
			max = stack_a->memory[i];
			j = i;
		}
		i++;
	}
	return (j);
}
