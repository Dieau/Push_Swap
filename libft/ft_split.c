/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:58:00 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/09 14:13:26 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	split_len(char *src, char c)
{
	size_t	i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		i++;
	}
	return (i);
}

static size_t	ft_getsize(char *src, char c)
{
	size_t	i;
	size_t	j;
	size_t	total;

	i = 0;
	j = 0;
	total = 0;
	while (src[i])
	{
		j = split_len(src + i, c);
		if (j > 0)
		{
			total++;
			i--;
		}
		i += j;
		i++;
	}
	return (total);
}

char	**ft_split(const char *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		size;
	char		**splittab;

	i = 0;
	j = 0;
	size = ft_getsize((char *)s, c);
	splittab = malloc((size + 1) * sizeof(char *));
	if (!splittab)
		return (NULL);
	while (((char *)s)[i])
	{
		size = split_len((char *)s + i, c);
		if (size > 0)
		{
			splittab[j] = ft_substr(s, i, size);
			j++;
			i--;
		}
		i += size;
		i++;
	}
	splittab[j] = 0;
	return (splittab);
}
