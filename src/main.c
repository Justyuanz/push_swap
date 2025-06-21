#include "push_swap.h"
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	printf("c: %d, %s", argc, argv[1]);
	if (input_ps(argc,  argv) == false)
	{
		write(2, "Error!", 6);
	}
	else
	{
		write(1, "OK", 2);
	}

	return (0);
}

