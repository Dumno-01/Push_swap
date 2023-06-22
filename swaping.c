/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:49:41 by ffreze            #+#    #+#             */
/*   Updated: 2023/03/14 10:18:34 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack stacks[2])
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stacks[A].array[i];
	stacks[A].array[i] = stacks[A].array[i + 1];
	stacks[A].array[i + 1] = tmp;
	write(1, "sa\n", 3);
}

void	ra(t_stack stacks[2])
{
	int	temp_first;

	temp_first = stacks[A].array[0];
	shift_bit_a(stacks, LEFT);
	stacks[A].array[stacks[A].cursor - 1] = temp_first;
	write(1, "ra\n", 3);
}

void	rra(t_stack stacks[2])
{
	int	temp_last;

	temp_last = stacks[A].array[stacks[A].cursor - 1];
	shift_bit_a(stacks, RIGHT);
	stacks[A].array[0] = temp_last;
	write(1, "rra\n", 4);
}

void	pb(t_stack stacks[2])
{
	int	to_push;

	to_push = stacks[A].array[0];
	shift_bit_a(stacks, LEFT);
	stacks[A].cursor--;
	shift_bit_b(stacks, RIGHT);
	stacks[B].array[0] = to_push;
	stacks[B].cursor++;
	write(1, "pb\n", 3);
}

void	pa(t_stack stacks[2])
{
	int	to_push;

	to_push = stacks[B].array[0];
	shift_bit_b(stacks, LEFT);
	stacks[B].cursor--;
	shift_bit_a(stacks, RIGHT);
	stacks[A].array[0] = to_push;
	stacks[A].cursor++;
	write(1, "pa\n", 3);
}
