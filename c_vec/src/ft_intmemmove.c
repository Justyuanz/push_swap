/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmemmove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:05:16 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/02 22:05:22 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

int	*ft_intmemmove(int *dst, const int *src, size_t n)
{
	size_t		i;
	int			*dest;
	const int	*source;

	if (!dst || !src || n == 0)
		return (NULL);
	dest = dst;
	source = src;
	i = 0;
	if (dest <= source)
	{
		while (i < n)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else
	{
		while (n--)
			dest[n] = source[n];
	}
	return (dst);
}
