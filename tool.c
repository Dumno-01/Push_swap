/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:10:10 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/20 13:20:02 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setup_size(t_stack stacks[2], char *num)
{
	stacks[A].max_size = count_word(num, ' ');
	stacks[A].cursor = stacks[A].max_size;
	stacks[B].cursor = 0;
}

void	push_stackb(t_stack stacks[2])
{
	while (stacks[B].cursor > 0)
	{
		pa(stacks);
	}
}


void shift_bit_a(t_stack stacks[2], t_direction dir)
{
	size_t index;

	index = 1;
	if (dir == LEFT)
	{
		while (index < stacks[A].cursor)
		{
			stacks[A].array[index - 1] = stacks[A].array[index];
			index++;
		}
	}
	index = stacks[A].cursor;
	if (dir == RIGHT)
	{
		while (index >= 1)
		{
			stacks[A].array[index] = stacks[A].array[index - 1];
			index--;
		}
	}
}

void shift_bit_b(t_stack stacks[2], t_direction dir)
{
	size_t index;

	index = 1;
	if (dir == LEFT)
	{
		while (index < stacks[B].cursor)
		{
			stacks[B].array[index - 1] = stacks[B].array[index];
			index++;
		}
	}
	index = stacks[B].cursor;
	if (dir == RIGHT)
	{
		while (index >= 1)
		{
			stacks[B].array[index] = stacks[B].array[index - 1];
			index--;
		}
	}
}

int	is_sorted(t_stack stacks[2])
{
	int i;
	int k;

	i = 0;
	k = 1;

	if (stacks[A].array[i] > stacks[A].array[k])
		return (1);
	while (i < stacks[A].max_size - 1)
	{
		if (stacks[A].array[i] > stacks[A].array[k])
			return (1);
		i++;
		k++;
	}
	return(0);
}