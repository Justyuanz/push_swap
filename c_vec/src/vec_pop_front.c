/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_pop_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:09:55 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:09:58 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	vec_pop_front(t_vec *src)
{
	if (!src || !src->memory || src->len == 0)
		return (-1);
	ft_intmemmove(&src->memory[0], &src->memory[1], src->len - 1);
	src->len--;
	return (1);
}
