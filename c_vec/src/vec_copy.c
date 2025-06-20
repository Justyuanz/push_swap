#include "vec.h"

int vec_copy(t_vec *dst, t_vec *src)
{
	if (!dst || ! src || !src->memory)
		return (-1);
	dst->len = src->len;
	dst->capacity = dst->len;
	ft_intmemcpy(dst->memory, src->memory, dst->capacity);
	return (1);
}
