/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:06:55 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:07:11 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_copy(t_vec *dst, t_vec *src)
{
	if (!dst || !src || !src->memory)
		return (-1);
	dst->len = src->len;
	dst->capacity = dst->len;
	ft_intmemcpy(dst->memory, src->memory, dst->capacity);
	return (1);
}
