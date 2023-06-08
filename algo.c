/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:49:41 by ffreze            #+#    #+#             */
/*   Updated: 2023/04/12 10:05:15 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int     bitcount(t_stack stacks[2])
{
    int i;
    int value;
    int k;

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

void    push_stackb(t_stack stacks[2])
{
    while (stacks[B].cursor > 0)
    {
        pa(stacks);
    }
}

void    sort_bit(t_stack stacks[2])
{
    int i;
    int nb;
    int k;

    i = 0;
    nb = 0;
    k = bitcount(stacks);
    printf("%d\n", k);
    while (i < k) 
    {
        while(nb < stacks[A].max_size)
        {
            if ((stacks[A].array[nb] >> i) & 1)
            {
                ra(stacks[A].array, stacks[A].max_size);
                printf("%s\n", "ra");
            }
            else
            {
                pb(stacks);
                printf("%s\n", "pb");
            }
            nb++;
        }
        push_stackb(stacks);
        i++;
        nb = 0;
    }
}