/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:49:41 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/14 15:46:52 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_index(int *str, t_stack stacks[3])
{
	int	count;
	int	numb;
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	numb = 0;
	count = 0;
	stacks[A].array = malloc(sizeof(int) * stacks[A].max_size);
	stacks[B].array = malloc(sizeof(int) * stacks[A].max_size);
	while (count < stacks[A].max_size)
	{
		while (i < stacks[A].max_size)
		{
			if (str[numb] > str[i++])
				pos++;
		}
		stacks[A].array[numb++] = pos;
		count++;
		i = 0;
		pos = 0;
	}
}

int	main(int argc, char **argv)
{
	char	**count;
	int		size;
	char	*num;
	int		*stack;
	t_stack	stacks[3];

	size = 1;
	num = ft_calloc(sizeof(char), 1);
	while (size < argc)
	{
		num = ft_strjoin(num, argv[size]);
		size++;
	}
	if (check_letters(num) == 1)
		return (write(2, "Error\n", 6));
	setup_size(stacks, num);
	count = ft_split(num, ' ');
	stack = ft_atoi_split(count);
	if (stack == NULL)
		return (0);
	if (check_double(stack, stacks[A].max_size) == 1)
		return (write(2, "Error\n", 6));
	ft_index(stack, stacks);
	choose_algo(stacks);
	free(num);
	free(stacks[A].array);
	free(stacks[B].array);
}
