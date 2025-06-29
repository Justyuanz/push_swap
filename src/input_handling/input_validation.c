#include "push_swap.h"

static bool	check_sign(char *str)
{
	int	i;
	int flag;


	i = 1;
	flag = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		flag = 1;
		while(str[i])
		{
			if((str[i] == '-' || str[i] == '+'))
				flag++;
			if (flag == 2)
				return (false);
			i++;
		}
	}
	if (flag == 1 && ft_strlen(str) > 1)
		return (true);
	return(false);
}

static bool num_only(char **argv)
{
	int	i;
	int	j;

	i = 0;

	while(argv[++i])
	{
		if (argv[i][0] == '\0')
			return (false);
		j = -1;
		while(argv[i][++j])
		{
			if((argv[i][j] > '9' || argv[i][j] < '0'))
			{
				if (check_sign(argv[i]) == true)
					continue;
				else
					return (false);
			}
		}
	}
	return (true);
}

bool input_valid(int argc, char **argv)
{
	if (argc>=2)
		if (num_only(argv))
				return (true);
	return (false);
}