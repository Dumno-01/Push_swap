/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:06:58 by ffreze            #+#    #+#             */
/*   Updated: 2022/11/17 17:42:16 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*b;
	int		i;

	b = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (b[i] == (char)c)
			return (&b[i]);
		i--;
	}
	return (NULL);
}
