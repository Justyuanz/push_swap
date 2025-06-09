#include "push_swap.h"
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

long	ft_atoi(char	*str)
{
	int	i;
	int sign;
	long	result;

	i = 0;
	sign = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (result > INT_MAX || result < INT_MIN)
	{
		write (2, "Error\n", 6);
		exit;
	}

	return (result * sign);
}
int	count_words(char *str, char c)
{
	int	i;

	i = 0;
	while (str[len])
		len++;
	while 
}

bool ft_split(t_stack *arr, char *str, char c)
{
	arr->size = count_words(str, c);
	if (arr->size == 1)
		return (false);
}