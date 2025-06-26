#include "push_swap.h"

void	destroy_and_exit(t_vec *stack_a, t_vec *stack_b)
{
	vec_free(stack_a);
	vec_free(stack_b);
	write(2, "Error\n", 6);
}

bool	stack_init(t_vec *stack_a, t_vec *stack_b)
{
	if (vec_new(stack_a, 2) == -1)
		return (false);
	if (vec_new(stack_b, 2) == -1)
		return (false);
	return (true);
}
bool	arg_to_vec(t_vec *stack_a, char **argv, int argc)
{
	int	i;
	int	ret;
	int error;

	i = 1;
	error = 0;
	while (argc - 1 > 0)
	{
		ret = ft_atoi(argv[argc -1], &error);
		if (error == -1)
			return(false);
		if (vec_push(stack_a, &ret) == -1)
			return (false);
		argc--;
	}
	return (true);
}