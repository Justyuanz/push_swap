#include "push_swap.h"
bool	vec_init(t_vec *stack_a, t_vec *stack_b)
{
	if (vec_new(stack_a, 2) == -1)
		return (false);
	if (vec_new(stack_b, 2) == -1)
		return (false);
	return (true);
}
bool	arg_to_vec(t_vec *stack_a, char **argv)
{
	int	i;
	int	ret;

	i = 1;
	while (argv[i])
	{
		 //need to check for overflow
		ret = ft_atoi(argv[i]);
		if (ret)
		{
			if (vec_push(stack_a, &ret) == -1)
				return (false);
		}
		i++;
	}
	return (true);
}