/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:10:18 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/08 13:04:27 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_push(t_vec *dst, int *element)
{
	int	i;

	i = 0;
	if (!dst || !element)
		return (-1);
	if (!dst->memory)
		vec_new(dst, 1);
	if (dst->len >= dst->capacity)
	{
		if (vec_resize(dst, dst->len * 2) == -1)
			return (-1);
	}
	ft_intmemcpy(&dst->memory[dst->len], element, 1);
	dst->len += 1;
	return (1);
}
