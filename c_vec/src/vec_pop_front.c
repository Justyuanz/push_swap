#include "vec.h"

int vec_pop_front(t_vec *src)
{
	if (!src || !src->memory || src->len == 0)
		return (-1);
	ft_intmemmove(&src->memory[0],&src->memory[1], src->len - 1);
	src->len--;
	return (1);
}
