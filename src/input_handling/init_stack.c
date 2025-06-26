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
		return (false);
	if (vec_new(stack_b, 2) == -1)
		return (false);
	return (true);
}

static bool	check_duplicate(t_vec *stack_a, int argc)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(i < argc - 2)
	{
		j = i;
		while(j < argc - 2)
		{
			if (stack_a->memory[i] == stack_a->memory[j + 1])
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	arg_to_vec(t_vec *stack_a, char **argv, int argc)
{
	int	i;
	int	ret;
	int error;
	int	j;

	i = 1;
	j = argc;
	error = 0;
	while (j - 1 > 0)
	{
		ret = ft_atoi(argv[j -1], &error);
		if (error == -1)
			return(false);
		if (vec_push(stack_a, &ret) == -1)
			return (false);
		j--;
	}
	if(check_duplicate(stack_a, argc) == false)
		return (false);
	return (true);
}
