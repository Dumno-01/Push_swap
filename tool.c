/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:10:10 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/13 14:16:34 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setup_size(t_stack stacks[2], char *num)
{
	stacks[A].max_size = count_word(num, ' ');
	stacks[A].cursor = stacks[A].max_size;
	stacks[B].cursor = 0;
}
