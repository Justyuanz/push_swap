/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_from.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:07:44 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:07:51 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_from(t_vec *dst, int *src, size_t len)
{
	int	i;

	if (!src)
		return (-1);
	i = 0;
	if (vec_new(dst, len) < 0)
	{
		return (-1);
	}
	else
	{
		ft_intmemcpy(dst->memory, src, dst->capacity);
		if (!dst->memory)
			return (-1);
	}
	dst->len = len;
	return (1);
}
