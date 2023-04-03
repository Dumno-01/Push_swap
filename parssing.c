/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:49:41 by ffreze            #+#    #+#             */
/*   Updated: 2023/03/14 10:18:34 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_stack	*ft_index(int *str, int size)
{
	s_stack stack;
	int count;
	int numb:
	int i:
	int pos;

	i = 0;
	pos = 0;
	numb = 0
	count = 0;
	stack.array = malloc(sizeof(int) * size);
	while (count <= size)
	{
		while (i <= size)
		{
			if (str[numb] < str[i++])
				pos++;
		}
		stack.array[numb++] = pos;
		count++;
		i = 0;
		pos = 0;
	]
	return (index);
}

void	ft_push_swap(int *stack, int *index, int size)
{
	int *stackb;

	stackb = malloc(sizeof(int) * size);
	
}

int	main(int argc, char** argv)
{
    char **count;
    int size;
    char *num;
    int *stack;
    int *index;
    
    size = 1;   
    while (size <= argc)
    {
        num = ft_strjoin(num, argv[size]);
        size++;
    }
    if (check_letters(num) == 1)
        return(write(2, "Error\n", 6));
    count = ft_split(num, ' ');
    size = ft_strlen(count);
    stack = ft_atoi_split(count);
    index = ft_index(stack, size);
	ft_push_swap(stack, index, size);
}