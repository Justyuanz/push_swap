/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:19:23 by jinzhang          #+#    #+#             */
/*   Updated: 2025/07/08 13:18:48 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../c_vec/include/vec.h"
# include "../libft/libft.h"
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

bool	input_valid(int argc, char **argv);
bool	arg_to_vec(t_vec *stack_a, char **argv);
bool	stack_init(t_vec *stack_a, t_vec *stack_b);
void	destroy_and_exit(t_vec *stack_a, t_vec *stack_b);

void	ft_sa(t_vec *stack_a);
void	ft_sb(t_vec *stack_b);
void	ft_ss(t_vec *stack_a, t_vec *stack_b);
void	ft_pa(t_vec *stack_b, t_vec *stack_a);
void	ft_pb(t_vec *stack_a, t_vec *stack_b);
void	ft_ra(t_vec *stack_a);
void	ft_rb(t_vec *stack_b);
void	ft_rr(t_vec *stack_a, t_vec *stack_b);
void	ft_rra(t_vec *stack_a);
void	ft_rrb(t_vec *stack_b);
void	ft_rrr(t_vec *stack_a, t_vec *stack_b);

int		find_min(t_vec *stack_a);
int		find_max(t_vec *stack_a);
int		count_bits(int num);
void	sorting_algo(t_vec *stack_a, t_vec *stack_b, int argc);
bool	check_sorted(t_vec *stack_a);
void	radix_sort(t_vec *stack_a, t_vec *stack_b);

#endif
