/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_resize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:14:02 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:14:08 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_resize(t_vec *src, size_t target_len)
{
	t_vec	tmp;

	if (!src)
		return (-1);
	if (!src->memory)
	{
		return (vec_new(src, target_len));
	}
	else
	{
		if (vec_new(&tmp, target_len) == -1)
		{
			return (-1);
		}
		else
		{
			ft_intmemcpy(tmp.memory, src->memory, src->capacity);
			tmp.len = src->len;
			vec_free(src);
			*src = tmp;
		}
	}
	return (1);
}
