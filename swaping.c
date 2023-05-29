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

void swap_a(int *stack)
{
    int i;
    int tmp;

    i = 0;
    tmp = stack[i];
    stack[i] = stack[i + 1];
    stack[i + 1] = tmp;
}

void ra(int *stack, int size)
{
    int first_n;
    int i;

    i = 0;
    first_n = stack[0];
    while (i < size)
    {
        stack[i] = stack[i + 1];
        i++;
    }
    stack[size] = first_n;
}

void rra(int *stack, int size)
{
    int last_n;
    int i;

    i = size - 1;
    last_n = stack[size];
    while (i > 0)
    {
        stack[i] = stack[i - 1];
        i--;
    }
    stack[0] = last_n;
}

void pb(t_stack stacks[2])
{
  if (stacks[A].cursor > 0)
  {
    stacks[B].array[stacks[B].cursor] = stacks[A].array[stacks[A].cursor];
    stacks[B].cursor++;
    stacks[A].cursor--;
  }
}

void pa(t_stack stacks[2])
{
  if (stacks[B].cursor > 0)
  {
    stacks[A].array[stacks[A].cursor] = stacks[B].array[stacks[B].cursor];
    stacks[A].cursor++;
    stacks[B].cursor--;
  }
}

/*PB

REGARDER SUR LA STACK A SI IL Y A UN ELEMENT A PUSH
    if CURSOR > ZERO
        STACKB->ARRAY{CURSOR} EGAL STACKA->array{cursor}
srackb>cursor++
stacka>cursor--
*/