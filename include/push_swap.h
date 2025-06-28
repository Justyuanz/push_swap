#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> // DELETE ME
#include "../c_vec/include/vec.h"
#include "../libft/libft.h"

bool 		input_valid(int argc, char **argv);
bool		arg_to_vec(t_vec *stack_a, char **argv, int argc);
bool		stack_init(t_vec *stack_a, t_vec *stack_b);

void		ft_sa(t_vec *stack_a);
void		ft_sb(t_vec *stack_b);
void		ft_ss(t_vec *stack_a, t_vec *stack_b);
void		ft_pa(t_vec *stack_b, t_vec *stack_a);
void		ft_pb(t_vec *stack_a, t_vec *stack_b);
void		ft_ra(t_vec *stack_a);
void		ft_rb(t_vec *stack_b);
void		ft_rr(t_vec *stack_a, t_vec *stack_b);
void		ft_rra(t_vec *stack_a);
void		ft_rrb(t_vec *stack_b);
void		ft_rrr(t_vec *stack_a, t_vec *stack_b);

bool 		sorting_algo(t_vec *stack_a, t_vec *stack_b, int argc);
bool 		check_sorted(t_vec *stack_a);
int 		find_max(t_vec *stack_a);
void		destroy_and_exit(t_vec *stack_a, t_vec *stack_b);
#endif