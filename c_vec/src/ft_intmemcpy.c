/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmemcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:03:39 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:04:26 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	*ft_intmemcpy(int *dst, const int *src, size_t n)
{
	size_t		i;
	int			*dest;
	const int	*source;

	if (!dst || !src || n == 0)
		return (NULL);
	i = 0;
	dest = dst;
	source = src;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
