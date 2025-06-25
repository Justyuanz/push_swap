#include "push_swap.h"
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

	i = 1;
	while (argc - 1 > 0)
	{
		ret = ft_atoi(argv[argc -1]);
		if (vec_push(stack_a, &ret) == -1)
			return (false);
		argc--;
	}
	return (true);
}