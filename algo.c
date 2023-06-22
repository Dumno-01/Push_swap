/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:49:41 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/22 16:02:12 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	i = 0;
	while (is_sorted(stacks) != 0)
	{
		nb = 0;
		while (nb < stacks[A].max_size)
		{
			if ((stacks[A].array[0] >> i) & 1)
			{
				ra(stacks);
			}
			else
			{
				pb(stacks);
			}
			nb++;
		}
		push_stackb(stacks);
		i++;
	}
}
void	DEBUG_STACKS(t_stack stacks[2]);

void	choose_algo(t_stack stacks[2])
{
	if (stacks[A].max_size == 0 || stacks[A].max_size == 1)
		return ;
	else if ((stacks[A].max_size == 2) && (is_sorted(stacks) == 1))
		sa(stacks);
	else if (stacks[A].max_size == 3 && (is_sorted(stacks) == 1))
		sort_small_stacks(stacks);
	else if (stacks[A].max_size == 4 && (is_sorted(stacks) == 1))
		sort_small_stack_max(stacks);
	else if (stacks[A].max_size == 5 && (is_sorted(stacks) == 1))
		sort_small_stack_max(stacks);
	else if (stacks[A].max_size > 5)
		sort_bit(stacks);
}
