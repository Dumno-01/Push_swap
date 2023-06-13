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
