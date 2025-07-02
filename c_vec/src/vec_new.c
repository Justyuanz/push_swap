/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:09:15 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:09:20 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_new(t_vec *dst, size_t init_len)
{
	if (!dst)
		return (-1);
	dst->len = 0;
	dst->capacity = init_len;
	if (init_len == 0)
	{
		dst->memory = NULL;
	}
	else
	{
		dst->memory = malloc(dst->capacity * sizeof(int));
		if (!dst->memory)
			return (-1);
	}
	return (1);
}
