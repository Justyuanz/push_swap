/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_push_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:10:46 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:10:53 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_push_front(t_vec *dst, int *element)
{
	if (!dst || !element)
		return (-1);
	if (!dst->memory)
		vec_new(dst, 1);
	if (dst->capacity <= (dst->len + 1))
	{
		if (vec_resize(dst, dst->len + 1) == -1)
			return (-1);
	}
	ft_intmemmove(&dst->memory[1], &dst->memory[0], dst->len);
	ft_intmemcpy(&dst->memory[0], element, 1);
	dst->len++;
	return (1);
}
