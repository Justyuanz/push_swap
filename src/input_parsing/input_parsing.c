#include "push_swap.h"
#include <stdbool.h>
#include <stdlib.h>

//TAKE INPUT
//check validity

static bool num_only(int argc, char **argv)
{
	int	i;
	int j;

	i = -1;
	j = -1;
	if (argc == 2)
	{
		while (argv[1][++i])
		{
			if ((argv[1][i] >= '9' || argv[1][i] <= '0') && argv[1][i] != ' '&& argv[1][i] != '-')
				return (false);
		}
	}
	if (argc > 2)
	{
		while(argv[++j])
		{
			while (argv[j][++i])
			{
				if ((argv[1][i] >= '9' || argv[1][i] <= '0') && argv[1][i] != '-')
					return (false);
			}
		}
	}
	return (true);
}
bool	check_duplicate();

bool input_ps(t_stack *arr, int argc, char **argv)
{
	if (num_only(argc,argv))
	{
		if (argc == 2)
			if (ft_split(argv[1], ' ') == false)
				return (false);
			//string, assign arr->size, then create stacks(check if size == 1)
		if (argc > 2)
			arr->size = argc - 1;
	}
	return (false);
}