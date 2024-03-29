/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:20:45 by ffreze            #+#    #+#             */
/*   Updated: 2023/06/23 13:38:21 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoires(const char *str, int *res)
{
	int			i;
	long int	nbr;
	int			sign;

	i = 0;
	nbr = 0;
	sign = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if ((char)str[i] == '-' || (char)str[i] == '+')
		if ((char)str[i++] == '-')
			sign++;
	if (!((char)str[i] >= '0' && (char)str[i] <= '9'))
		return (-1);
	while ((char)str[i] >= '0' && (char)str[i] <= '9' && str[i])
		nbr = nbr * 10 + ((char)str[i++] - '0');
	if (sign % 2 == 1)
		nbr = nbr * -1;
	if (nbr > 2147483647 || nbr < -2147483648 || str[i] != '\0')
		return (-1);
	*res = nbr;
	return (0);
}

size_t	ft_strlen(const char	*s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	check_double(int *str, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < i)
		{
			if (str[j] == str[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_letters(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' && str[i] != ' ' && str[i] != '-') || \
		(str[i] > '9' && str[i] != ' ' && str[i] != '-'))
			return (1);
		i++;
	}
	return (0);
}

int	*ft_atoi_split(char **str)
{
	int	i;
	int	*stack;
	int	j;

	j = 0;
	while (str[j])
	{
		j++;
	}
	stack = malloc(sizeof(int) * j);
	if (!stack)
		return (NULL);
	i = 0;
	while (str[i] != NULL)
	{
		if (ft_atoires(str[i], &stack[i]) == 0)
		{
			i++;
		}
		else
		{
			return (free(stack), NULL);
		}
	}
	return (stack);
}
