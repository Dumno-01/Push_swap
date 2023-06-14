/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:49:41 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/14 17:20:50 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	bitcount(t_stack stacks[2])
{
	int	i;
	int	value;
	int	k;

	i = 0;
	value = 0;
	k = 0;
	while (i < stacks[A].max_size)
	{
		if (value < stacks[A].array[i])
			value = stacks[A].array[i];
		i++;
	}
	i = 1;
	while (i < value)
	{
		i *= 2;
		k++;
	}
	return (k);
}

void	sort_bit(t_stack stacks[2])
{
	int	i;
	int	nb;
	int	k;

	i = 0;
	nb = 0;
	k = bitcount(stacks);
	while (i < k)
	{
		while (nb < stacks[A].max_size)
		{
			if ((stacks[A].array[nb] >> i) & 1)
			{
				ra(stacks[A].array, stacks[A].max_size);
			}
			else
			{
				pb(stacks);
			}
			nb++;
		}
		push_stackb(stacks);
		i++;
		nb = 0;
	}
}

void	choose_algo(t_stack stacks[2])
{
	if (stacks[A].max_size == 0 || stacks[A].max_size == 1)
		return ;
	if (stacks[A].max_size == 2)
		sa(stacks[A].array);
	if (stacks[A].max_size == 3)
		sort_small_stacks(stacks, stacks[A].array);
	if (stacks[A].max_size == 4)
		sort_small_stack_four(stacks, stacks[A].array, 0);
    if (stacks[A].max_size == 5)
		sort_small_stack_max(stacks);
	if (stacks[A].max_size > 5)
		sort_bit(stacks);
}
