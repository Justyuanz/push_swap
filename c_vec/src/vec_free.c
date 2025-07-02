/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:07:21 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:07:29 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	vec_free(t_vec *src)
{
	free(src->memory);
	src->memory = NULL;
	src->capacity = 0;
	src->len = 0;
}
