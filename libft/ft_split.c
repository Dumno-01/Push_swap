/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:23:23 by ffreze            #+#    #+#             */
/*   Updated: 2022/11/24 12:55:54 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_sep(char ch, char c)
{
	if (c == '\0')
		return (0);
	if (ch == c)
		return (1);
	return (0);
}

int	count_word(char const *str, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (is_sep(str[i], c) == 1 && str[i] != '\0')
		{
			i++;
		}
		while (is_sep(str[i], c) == 0 && str[i] != '\0')
		{
			i++;
		}
		k++;
	}
	if (i > 0 && is_sep(str[i - 1], c) == 1)
		k = k - 1;
	if (k < 0)
		k = 0;
	return (k);
}

static	char	**ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (NULL);
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

static	char	**ft_tab(char const *str, char c, char **tab)
{
	int	i;
	int	k;
	int	letters;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		letters = 0;
		while (is_sep(str[i], c) == 1 && str[i] != '\0')
			i++;
		while (is_sep(str[i], c) == 0 && str[i] != '\0')
		{
			i++;
			letters++;
		}
		if ((is_sep(str[i], c) == 1 || str[i] == '\0') \
		&& is_sep(str[i - 1], c) == 0)
		{
			tab[k++] = ft_substr(str, i - letters, letters);
			if (!tab[k - 1])
				return (ft_free_tab(tab));
		}
	}
	return (tab);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;

	if (!str)
		return (0);
	tab = malloc(sizeof(char *) * (count_word(str, c) + 1));
	if (!tab)
		return (0);
	tab = ft_tab(str, c, tab);
	tab[count_word(str, c)] = 0;
	return (tab);
}
