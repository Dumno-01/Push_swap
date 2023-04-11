/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:20:45 by ffreze            #+#    #+#             */
/*   Updated: 2023/03/20 11:35:06 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str, int *res)
{
	int						i;
	int						sign;

	i = 0;
	*res = 0;
	sign = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if ((char)str[i] == '-' || (char)str[i] == '+')
		if ((char)str[i++] == '-')
			sign++;
	while ((char)str[i] >= '0' && (char)str[i] <= '9')
		*res = *res * 10 + ((char)str[i++] - '0');
	if (*res > 2147483647 || *res < -2147483648)
		return(-1);
	if (sign % 2 == 1)
		*res = *res * -1;
	return (0);
}

size_t	ft_strlen(const char	**s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		check_double(int *str, int len)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < len)
	{
		if (str[i] == str[j])
			return (1);
		else
			j++;
		if (j == len)
		{
			i = j;
			j = i + 1;
		}
	}	
	return (0);
}

int		check_letters(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int 	*ft_atoi_split(char **str)
{
	int i;
	int *stack;
	
	stack = malloc(sizeof(int) * ft_strlen(str));
	i = 0
	
	while(str[i] != '\0')
	{
		stack[i] = ft_atoi(str[i]);
		i++;
	}
	return (stack)
}