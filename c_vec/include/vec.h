#ifndef VEC_H
# define VEC_H

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

typedef struct s_vec
{
	int				*memory;
	size_t			capacity;
	size_t			len;
}	t_vec;

int		vec_new(t_vec *dst, size_t init_len);
int		vec_from(t_vec *dst, int *src, size_t len);
int		vec_copy(t_vec *dst, t_vec *src);
int		vec_resize(t_vec *src, size_t target_size);
int		vec_push(t_vec *dst, int *element);
int 	vec_pop_front(t_vec *src);
int 	vec_insert(t_vec *dst, int *element, size_t index);
int 	vec_remove(t_vec *src, size_t index);
int 	vec_append(t_vec *dst, t_vec *src);
int 	vec_push_front(t_vec *dst, int *element);
int 	*vec_get(t_vec *src, size_t index);
int		*ft_intmemcpy(int * dst, const int * src, size_t n);
int		*ft_intmemmove(int *dst, const int *src, size_t n);
void	vec_free(t_vec *src);

#endif
