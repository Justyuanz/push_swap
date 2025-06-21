#include "push_swap.h"

static bool	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (true);
		i++;
	}
	return (false);
}

static bool num_only(char **argv)
{
	int	i;
	int	j;

	i = 0;

	while(argv[++i])
	{
		j = -1;
		while(argv[i][++j])
		{
			if((argv[i][j] > '9' || argv[i][j] < '0') && argv[i][j] != '-')
				return (false);
		}
	}
	return (true);
}
static bool	check_duplicate(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(i < argc)
	{
		j = i + 1;
		while(j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == false)
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool input_ps(int argc, char **argv)
{
	if (argc>=2)
	{
		if (num_only(argv))
		{
			if (check_duplicate(argc, argv))
			{
				ft_atoi(argv[])
				//store argv into the vec
			}
			else
				return (false);
		}
	}
	return (false);
}