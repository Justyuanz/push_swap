/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:08:02 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:08:05 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	*vec_get(t_vec *src, size_t index)
{
	if (!src || !src->memory || src->len == 0 || index >= src->len)
		return (NULL);
	return (&src->memory[index]);
}
