#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <stdlib.h>

typedef struct s_vec
{
	int				*memory;
	size_t			capacity;
	size_t			len;
}	t_vec;

bool 		input_ps(int argc, char **argv);
#endif