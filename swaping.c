/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:49:41 by ffreze            #+#    #+#             */
/*   Updated: 2023/03/14 10:18:34 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *swap_a(int *stack)
{
    int i;
    int tmp;

    i = 0
    tmp = stack[i];
    stack[i] = stack[i + 1];
    stack[i + 1] = tmp;

    return (stack);
}

int *ra(int *stack, int size)
{
    int first_n;

    i = 0
    first_n = stack[0];
    while (i < size)
    {
        stack[i] = stack[i + 1];
        i++;
    }
    stack[size] = first_n;
    return(stack);
}

int *rra(int *stack, int size)
{
    int last_n;

    i = size - 1;
    last_n = stack[size];
    while (i > 0)
    {
        stack[i] = stack[i - 1];
        i--;
    }
    stack[0] = last_n;
    return(stack);
}

int *pb(int *stack, int *stackb)
{
    
}