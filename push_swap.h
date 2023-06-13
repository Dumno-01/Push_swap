/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:50:20 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/13 13:52:26 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

# define A 0
# define B 1

int		ft_atoires(const char *str, int *res);
size_t	ft_strlen(const char *s);
int		check_letters(char *str);
int		*ft_atoi_split(char **str);
int		check_double(int *str, int len);
void	sa(int *stack);
void	ra(int *stack, int size);
void	rra(int *stack, int size);
typedef struct s_stack {
	int	*array;
	int	cursor;
	int	max_size;
}	t_stack;

void	pa(t_stack stacks[2]);
void	pb(t_stack stacks[2]);
void	sort_bit(t_stack stacks[2]);
void	choose_algo(t_stack stacks[2]);
void	sort_small_stacks(t_stack stacks[2], int i);
void	sort_small_stack_other(t_stack stacks[2], int i);
void	sort_small_stack_higher(t_stack stacks[2]);
#endif
