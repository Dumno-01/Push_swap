/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stacks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:34:11 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/13 13:54:30 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small_stacks(t_stack stacks[2], int i)
{
	int	k;

	k = i + 1;
	if ((stacks[A].array[i] < stacks[A].array[k + 1]) && \
	(stacks[A].array[k] > stacks[A].array[k + 1]))
	{
		sa(stacks[A].array);
		rra(stacks[A].array, stacks[A].max_size);
	}
	else if ((stacks[A].array[i] < stacks[A].array[k]) && \
	(stacks[A].array[i] > stacks[A].array[k + 1]))
	{
		rra(stacks[A].array, stacks[A].max_size);
	}
	else if ((stacks[A].array[i] > stacks[A].array[k + 1]) && \
	stacks[A].array[k + 1] < stacks[A].array[k])
	{
		ra(stacks[A].array, stacks[A].max_size);
		sa(stacks[A].array);
	}
	else
		sort_small_stack_other(stacks, i);
}

void	sort_small_stack_other(t_stack stacks[2], int i)
{
	int	k;

	k = i + 1;
	if ((stacks[A].array[i] > stacks[A].array[k]) && \
	(stacks[A].array[i] < stacks[A].array[k + 1]))
	{
		ra(stacks[A].array, stacks[A].max_size);
		sa(stacks[A].array);
		rra(stacks[A].array, stacks[A].max_size);
	}
	else if ((stacks[A].array[k] < stacks[A].array[i]) && \
	(stacks[A].array[k] < stacks[A].array[k +1]))
		ra(stacks[A].array, stacks[A].max_size);
}

void	sort_small_stack_higher(t_stack stacks[2])
{
	int	i;

	i = 0;
	while (stacks[A].array[i] != 0)
	{
		i++;
	}
	if (i == 1)
		ra(stacks[A].array, stacks[A].max_size);
	else if (i == 2)
	{
		ra(stacks[A].array, stacks[A].max_size);
		ra(stacks[A].array, stacks[A].max_size);
	}
	else if (i == 3)
		rra(stacks[A].array, stacks[A].max_size);
	pb(stacks);
	sort_small_stacks(stacks, 1);
	pa(stacks);
}
