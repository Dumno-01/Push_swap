/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:50:20 by ffreze            #+#    #+#             */
/*   Updated: 2023/03/06 14:02:35 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define A 0
# define B 1

int	ft_atoi(const char *str);
size_t	ft_strlen(const char     *s);
typedef struct s_stack {
    int *array; // Tableau d'entier.
    int cursor; // Index du dernier element du tableau
    int max_size; // Nombre total delement
}   t_stack;

#endif

/*
stack a 
{
    [ 2, 4, 5, 8, 3 ],
    4
    5
}

stack b
{
    [ ]
    0
    5
}

PB

REGARDER SUR LA STACK A SI IL Y A UN ELEMENT A PUSH
    if CURSOR > ZERO
        STACKB->ARRAY{CURSOR} EGAL STACKA->array{cursor}
srackb>cursor++
stacka>cursor--
