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

void	sa(int *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack[i];
	stack[i] = stack[i + 1];
	stack[i + 1] = tmp;
	write(1, "sa\n", 3);
}

void	ra(int *stack, int size)
{
	int	first_n;
	int	i;

	i = 0;
	first_n = stack[0];
	while (i < size)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[size - 1] = first_n;
	write(1, "ra\n", 3);
}

/*
	RA ( le premier deviens le dernier )

	if (cursor < 2)
		return ;
	size_t index = 1;
	int	temp_first = stack[A].array[0];
	while (index < cursor)
	{
		stack[A].array[index - 1] = stack[A].array[index];
		index++;
	}
	stack[A].array[cursor - 1] = temp_first;
*/

void	rra(int *stack, int size)
{
	int	last_n;
	int	i;

	i = size - 1;
	last_n = stack[size - 1];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = last_n;
	write(1, "rra\n", 4);
}

void	pb(t_stack stacks[2])
{
	if (stacks[A].cursor > 0)
	{
		stacks[B].array[stacks[B].cursor] = stacks[A].array[stacks[A].cursor];
		stacks[B].cursor++;
		stacks[A].cursor--;
	}
	write(1, "pb\n", 3);
}

/*
	PB prend le premier sur A et le met sur B

	size_t index;
	int to_push;

	if (stacks[A].cursor < 1)
		return ;
	index = 1;
	to_push = stacks[A].array[0];
	while (index < stacks[A].cursor)
	{
		stacks[A].array[index - 1] = stacks[A].array[index];
		index++;
	}
	stacks[A].cursor--;
	index = 1;
	while (index < stacks[B].cursor)
	{
		stacks[B].array[index] = stacks[B].array[index - 1];
		index++;
	}
	stacks[B].array[0] = to_push;
	stacks[B].cursor++;
*/

void	pa(t_stack stacks[2])
{
	if (stacks[B].cursor > 0)
	{
		stacks[A].array[stacks[A].cursor] = stacks[B].array[stacks[B].cursor];
		stacks[A].cursor++;
		stacks[B].cursor--;
	}
	write(1, "pa\n", 3);
}
