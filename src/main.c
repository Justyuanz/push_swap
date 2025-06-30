#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_vec	stack_a;
	t_vec	stack_b;

	if (input_valid(argc,  argv) == false)
		return (write(2, "Error!", 6));
	if (stack_init(&stack_a, &stack_b))
	{
		if(!arg_to_vec(&stack_a, argv, argc))
			destroy_and_exit(&stack_a, &stack_b);
		sorting_algo(&stack_a, &stack_b, argc);
	}
	for (size_t i = 0; i < stack_a.len; i++)
	{
		//printf("%d ", stack_a.memory[i]);
	}
	
	vec_free(&stack_a);
	vec_free(&stack_b);
	return (0);
}
