/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:49:41 by ffreze            #+#    #+#             */
/*   Updated: 2023/04/12 10:05:15 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


void	ft_index(int *str, t_stack stacks[2])
{
	int count;
	int numb;
	int i;
	int pos;

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

// void	ft_push_swap(int *stack, int *index, int size)
// {
// 	int *stackb;

// 	stackb = malloc(sizeof(int) * size);
	
// }

int	main(int argc, char** argv)
{
    char **count;
    int size;
    char *num;
    int *stack;
    t_stack stacks[2];
    
    size = 1;
	num = ft_calloc(sizeof(char), 1); 
    while (size < argc)
    {
        num = ft_strjoin(num, argv[size]);
        size++;
    }
    if (check_letters(num) == 1)
        return(write(2, "Error\n", 6));
    stacks[A].max_size = count_word(num, ' ');
	stacks[A].cursor = stacks[A].max_size;
    count = ft_split(num, ' ');
    stack = ft_atoi_split(count);
	if (stack == NULL)
		return(0);
	if (check_double(stack, stacks[A].max_size) == 1)
	 	return(write(2, "Error\n", 6));
    ft_index(stack, stacks);
	sort_bit(stacks);
	free(num);
	free(stacks[A].array);
	free(stacks[B].array);
}
	// ft_push_swap(stack, stacks[A], size);

/*

int	ft_atoi(char *str, int *out)
{
	// TOUT LES TRUC DE ATOI SI CA SE PASSE BIEN A LA FIN ON ECRIT DANS OUT
	*out = mon entier
	// SI YA UNE ERREUR
		return (-1);
	// SI CA SE PASSE BIEN
		return (0);
}

int main(int ac, char **av)
{
	int current_int;

	if (ft_atoi("42", &current_int) < 0)
		return (ERROR)
	// tu push ton entier
	push(stack, current_int)
	et tu boucle
}


type *variable;

*variable -> type

int* nb;

*nb -> cest un entier

nb -> cest une adresse

nb[1] <=> *(nb + 1)


*/