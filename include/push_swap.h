#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> // DELETE ME
#include "../c_vec/include/vec.h"
#include "../libft/libft.h"

bool 		input_ps(int argc, char **argv);
bool		arg_to_vec(t_vec *stack_a, char **argv);
bool		vec_init(t_vec *stack_a, t_vec *stack_b);
#endif