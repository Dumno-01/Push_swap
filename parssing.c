/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:49:41 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/22 14:01:17 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(int *str, t_stack stacks[2])
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
	char	**c;
	int		size;
	char	*n;
	int		*s;
	t_stack	stacks[2];

	size = 1;
	n = ft_calloc(sizeof(char), 1);
	while (size < argc)
	{
		n = ft_strjoin(n, argv[size]);
		size++;
	}
	if (check_letters(n) == 1)
		return (free(n), write(2, "Error\n", 6));
	setup_size(stacks, n);
	c = ft_split(n, ' ');
	s = ft_atoi_split(c);
	if (s == NULL)
		return (0);
	if (check_double(s, stacks[A].max_size) == 1)
		return (write(2, "Error\n", 6), free_all(n, s, c, stacks));
	ft_index(s, stacks);
	choose_algo(stacks);
	free_all(n, s, c, stacks);
}

int	free_all(char *num, int *stack, char **count, t_stack stacks[2])
{
	free(num);
	free(stack);
	ft_free_split(count);
	free(stacks[A].array);
	free(stacks[B].array);
	return (0);
}
