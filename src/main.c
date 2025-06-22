#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_vec	stack_a;
	t_vec	stack_b;

	if (input_valid(argc,  argv) == false)
		return (write(2, "Error!", 6));
	if (stack_init(&stack_a, &stack_b))
	{
		arg_to_vec(&stack_a, argv);
	}
	printf("%zu\n", stack_a.len);
	for (size_t i = 0; i < stack_a.len; i++)
	{
		printf("%d ", stack_a.memory[i]);
	}
	ft_sa(&stack_a);
	ft_pa(&stack_b, &stack_a);
	printf("\n");
	for (size_t i = 0; i < stack_a.len; i++)
	{
		printf("%d ", stack_a.memory[i]);
	}
		printf("\n");
	for (size_t i = 0; i < stack_b.len; i++)
	{
		printf("%d ", stack_b.memory[i]);
	}
	vec_free(&stack_a);
	vec_free(&stack_b);
	return (0);
}

