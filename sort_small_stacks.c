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

// void	sort_small_stack_four(t_stack stacks[2], int *array)
// {
// 	int	i;

// 	i = 0;
// 	while (array[i] != five)
// 	{
// 		i++;
// 	}	
// 	if (i == 1)
// 		ra(array, stacks[A].max_size);
// 	else if (i == 2)
// 	{
// 		ra(array, stacks[A].max_size);
// 		ra(array, stacks[A].max_size);
// 	}
// 	else if (i == 3)
// 		rra(array, stacks[A].max_size);
// 	pb(stacks);
// 	sort_small_stacks(stacks, threetab);
// 	pa(stacks);
// }

// void	sort_small_stack_max(t_stack stacks[2])
// {
// 	int five;
// 	int *fivearray;
	
// 	five = 0;
// 	while (stacks[A].array[five] != 0)
// 		five++;
// 	if (five == 1)
// 		ra(stacks[A].array, stacks[A].max_size);
// 	else if (five == 2)
// 	{
// 		ra(stacks[A].array, stacks[A].max_size);
// 		ra(stacks[A].array, stacks[A].max_size);
// 	}
// 	else if (five == 3)
// 	{
// 		rra(stacks[A].array, stacks[A].max_size);
// 		rra(stacks[A].array, stacks[A].max_size);
// 	}
// 	else if (five == 4)
// 		rra(stacks[A].array, stacks[A].max_size);
// 	pb(stacks);
// 	fivearray = tab_for_four(stacks);
// 	sort_small_stack_four(stacks, fivearray, 1);
// 	pa(stacks);
// }