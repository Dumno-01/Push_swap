/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:45:24 by ffreze            #+#    #+#             */
/*   Updated: 2022/11/24 12:57:02 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*b;

	b = (char *)s;
	i = 0;
	while (b[i] && b[i] != (char)c)
		i++;
	if (b[i] == (char)c)
		return (&b[i]);
	return (NULL);
}
