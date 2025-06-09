#include "push_swap.h"
#include <stdlib.h>

t_stack	*create_stacks(t_stack *arr)
{
	arr->stack_a = malloc(arr->size * sizeof(int));
	if (!arr->stack_a)
		return (NULL);
	arr->stack_b = malloc(arr->size * sizeof(int));
	if (!arr->stack_b)
	{
		free(arr->stack_a);
		arr->stack_a = NULL;
		return (NULL);
	}
	return (arr);
}
void free_stacks(t_stack *arr)
{
	free(arr->stack_a);
	arr->stack_a = NULL;
	free(arr->stack_b);
	arr->stack_b = NULL;
}