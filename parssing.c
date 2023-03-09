/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:49:41 by ffreze            #+#    #+#             */
/*   Updated: 2023/03/09 15:56:20 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int arc, char** argv)
{
    int len;
    int *count;
    
    len = ft_strlen(argv);
    count = malloc(sizeof(int) * len);
    count = ft_atoi(argv[1]);
    if (check_condition(count, len) == 1)
        return (write(2, "Error\n", 6);)
    else
    
}