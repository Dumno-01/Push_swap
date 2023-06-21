// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stacks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:34:11 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/14 17:56:06 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small_stacks(t_stack stacks[2])
{
	int	k;
	int i;

	i = 0;
	k = 1;
	if ((stacks[A].array[i] < stacks[A].array[k + 1]) && \
	(stacks[A].array[k] > stacks[A].array[k + 1]))
	{
		rra(stacks);
		sa(stacks);
	}
	else if ((stacks[A].array[i] < stacks[A].array[k]) && \
	(stacks[A].array[i] > stacks[A].array[k + 1]))
	{
		rra(stacks);
	}
	else if ((stacks[A].array[k] < stacks[A].array[i]) && \
	stacks[A].array[k + 1] < stacks[A].array[k])
	{
		sa(stacks);
		rra(stacks);
	}
	else
		sort_small_stack_other(stacks);
}

void	sort_small_stack_other(t_stack stacks[2])
{
	int	k;
	int i;
	
	i = 0;
	k = 1;
	if ((stacks[A].array[i] > stacks[A].array[k]) && \
	(stacks[A].array[i] < stacks[A].array[k + 1]))
		sa(stacks);
	else if ((stacks[A].array[k + 1] < stacks[A].array[i]) && \
	(stacks[A].array[k + 1] > stacks[A].array[k]))
		ra(stacks);
}

void	sort_small_stack_max(t_stack stacks[2])
{
	top_min(stacks);
	pb(stacks);
	if (stacks[A].max_size == 5)
	{
		top_min(stacks);
		pb(stacks);
	}
	sort_small_stacks(stacks);
	pa(stacks);
	if (stacks[A].max_size == 5)
		pa(stacks);
}

void	top_min(t_stack stacks[2])
{
	size_t min;

	min = find_min(stacks);
	if (min == 1)
		ra(stacks);
	else if (min == 2)
	{
		ra(stacks);
		ra(stacks);
	}
	else if (min == 3)
		rra(stacks);
	else if (min == 4)
	{
		rra(stacks);
		rra(stacks);
	}	
}

int		find_min(t_stack stacks[2])
{
	size_t i;
	size_t k;

	i = 0;
	k = 1;
	while (k < stacks[A].cursor)
	{
		if (stacks[A].array[i] > stacks[A].array[k])
		{
			i = k;
		}
		k++;
	}
	return (i);
}