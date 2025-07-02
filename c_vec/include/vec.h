/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:19:58 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/03 00:47:37 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_H
# define VEC_H

# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_vec
{
	int		*memory;
	size_t	capacity;
	size_t	len;
}			t_vec;

int			vec_new(t_vec *dst, size_t init_len);
int			vec_copy(t_vec *dst, t_vec *src);
int			vec_resize(t_vec *src, size_t target_size);
int			vec_push(t_vec *dst, int *element);
int			vec_pop_front(t_vec *src);
int			vec_push_front(t_vec *dst, int *element);
int			*vec_get(t_vec *src, size_t index);
int			*ft_intmemcpy(int *dst, const int *src, size_t n);
int			*ft_intmemmove(int *dst, const int *src, size_t n);
void		vec_free(t_vec *src);

#endif
