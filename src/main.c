#include "push_swap.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	t_stack	arr;
	//check for argv null?
	if(argc > 2)
	{
		if (input_ps(&arr, argc,  argv))
			//false on error
	}
	free_arrays(&arr);
	return (0);
}

