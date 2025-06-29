#include "push_swap.h"

static void ft_swap(t_vec *stack)
{
	int	tmp;
	int	*a;
	int	*b;

	if (!stack || !stack->memory || stack->len == 0 || stack->len == 1)
		return;

	a = vec_get(stack, 0);
	b = vec_get(stack, 1);
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void ft_sa(t_vec *stack_a)
{
	if (!stack_a || !stack_a->memory || stack_a->len == 0 || stack_a->len == 1)
		return;
	ft_swap(stack_a);
	write(1, "sa\n", 3);
}

void ft_sb(t_vec *stack_b)
{
	if (!stack_b || !stack_b->memory || stack_b->len == 0 || stack_b->len == 1)
		return;
	ft_swap(stack_b);
	write(1, "sb\n", 3);
}

void ft_ss(t_vec *stack_a, t_vec *stack_b)
{
	if (!stack_a || !stack_a->memory || stack_a->len == 0 || stack_a->len == 1 ||
		!stack_b || !stack_b->memory || stack_b->len == 0 || stack_b->len == 1)
		return;
	ft_swap(stack_a);
	ft_swap(stack_b);
	write(1, "ss\n", 3);
}