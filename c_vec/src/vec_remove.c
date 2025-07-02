/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_remove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:11:17 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:11:22 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_remove(t_vec *src, size_t index)
{
	if (!src || !src->memory || index >= src->len)
		return (-1);
	if (index == (src->len - 1))
	{
		src->len -= 1;
		return (1);
	}
	if (!ft_intmemmove(vec_get(src, index), vec_get(src, index + 1), src->len
			- index))
		return (-1);
	src->len -= 1;
	return (1);
}
