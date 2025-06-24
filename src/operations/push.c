#include "push_swap.h"

void	ft_pa(t_vec *stack_b, t_vec *stack_a)
{
	if(!stack_b || !stack_b->memory ||stack_b->len == 0)
		return;
	vec_push(stack_a, vec_get(stack_b, stack_b->len - 1));
	vec_pop(&stack_b->memory[stack_b->len - 1], stack_b);
	write(1,"pa\n", 3);
}

void	ft_pb(t_vec *stack_a, t_vec *stack_b)
{
	if(!stack_a || !stack_a->memory || stack_a->len == 0)
		return;
	vec_push(stack_b, vec_get(stack_a, stack_a->len - 1));
	vec_pop(&stack_a->memory[stack_a->len - 1], stack_a);
	write(1,"pb\n", 3);
}