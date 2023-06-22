/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:49:41 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/22 14:32:53 by ffreze           ###   ########.fr       */
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
	char	*n;
	int		*s;
	t_stack	stacks[2];

	stacks[A].array = NULL;
	stacks[B].array = NULL;
	n = join_all(argv, 1 , argc);
	if (check_letters(n) == 1)
		return (free(n), write(2, "Error\n", 6));
	setup_size(stacks, n);
	c = ft_split(n, ' ');
	s = ft_atoi_split(c);
	if (s == NULL)
		return (0);
	if (check_double(s, stacks[A].max_size) == 1)
		return (free_all(n, s, c, stacks), write(2, "Error\n", 6));
	ft_index(s, stacks);
	choose_algo(stacks);
	free_all(n, s, c, stacks);
}

void free_all(char *num, int *stack, char **count, t_stack stacks[2])
{
	free(num);
	free(stack);
	ft_free_split(count);
	free(stacks[A].array);
	free(stacks[B].array);
	if (stack || num || count)
		return ;
}

char *join_all(char **argv, int size, int argc)
{
	char *n;
	
	n = ft_calloc(sizeof(char), 1);
	while (size < argc)
	{
		n = ft_strjoin(n, argv[size]);
		size++;
	}
	return (n);
}