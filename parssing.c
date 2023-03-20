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

int main(int argc, char** argv)
{
    char **count;
    int i;
    char *num
    int *stack
    
    i = 1        
    while (i <= argc)
    {
        num = ft_strjoin(num, argv[i]);
        i++;
    }
    if (check_letters(num) == 1)
        return(write(2, "Error\n", 6));
    count = ft_split(num, ' ');
    stack = ft_atoi_split(count);
}