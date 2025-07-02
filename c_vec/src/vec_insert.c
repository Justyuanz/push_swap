/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_insert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:08:15 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:08:40 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_insert(t_vec *dst, int *element, size_t index)
{
	if (!dst || !element || index > dst->len)
		return (-1);
	if (dst->capacity <= dst->len)
		if (vec_resize(dst, dst->len * 2) == -1)
			return (-1);
	if (index == dst->len)
		return (vec_push(dst, element));
	if (!ft_intmemmove(vec_get(dst, index + 1), vec_get(dst, index), dst->len
			- index))
		return (-1);
	if (!ft_intmemcpy(vec_get(dst, index), element, 1))
		return (-1);
	dst->len += 1;
	return (1);
}
