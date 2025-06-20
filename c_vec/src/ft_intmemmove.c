#include "vec.h"

void *ft_intmemmove(int *dst, const int *src, size_t n)
{
	size_t	i;
	int	*dest;
	const int *source;
	if (!dst || !src || n == 0)
		return (NULL);
	dest = dst;
	source = src;
	i =  0;
	if (dest <= source)
	{
		while(i < n)
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
