/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:50:20 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/20 10:37:17 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define A 0
# define B 1

int		ft_atoires(const char *str, int *res);
size_t	ft_strlen(const char *s);
int		check_letters(char *str);
int		*ft_atoi_split(char **str);
int		check_double(int *str, int len);

typedef struct s_stack {
	int	*array;
	size_t	cursor;
	int	max_size;
}	t_stack;

typedef enum e_direction {
LEFT,
RIGHT
} t_direction;

void	sa(t_stack stacks[2]);
void	ra(t_stack stacks[2]);
void	rra(t_stack stacks[2]);
void	pa(t_stack stacks[2]);
void	pb(t_stack stacks[2]);
void	sort_bit(t_stack stacks[2]);
void	choose_algo(t_stack stacks[2]);
void	sort_small_stacks(t_stack stacks[2]);
void	sort_small_stack_other(t_stack stacks[2]);
void	sort_small_stack_max(t_stack stacks[2]);
void	push_stackb(t_stack stacks[2]);
void	setup_size(t_stack stacks[2], char *num);
int		is_sorted(t_stack stacks[2]);
void 	shift_bit_a(t_stack stacks[2], t_direction dir);
void 	shift_bit_b(t_stack stacks[2], t_direction dir);
void	top_min(t_stack stacks[2]);
int		find_min(t_stack stacks[2]);
#endif
