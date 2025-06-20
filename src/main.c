#include "push_swap.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
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

