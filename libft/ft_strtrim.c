/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:40:28 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/09 14:11:05 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_finish_trim(char *trim, char
	*trim_start, unsigned int trim_size)
{
	ft_strlcpy(trim, trim_start, trim_size);
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	trim_size;
	char			*trim_start;
	char			*trim_end;
	char			*trim;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	trim_start = (char *)&s1[i];
	i = ft_strlen(s1) - 1;
	if (i != -1)
		while (i >= 0 && is_in_set(s1[i], set))
			i--;
	trim_end = (char *)&s1[i];
	if (!*s1 || trim_end == trim_start)
		trim_size = 2;
	else
		trim_size = trim_end - trim_start + 2;
	trim = malloc(sizeof(char) * trim_size);
	if (trim == NULL)
		return (NULL);
	return (ft_finish_trim(trim, trim_start, trim_size));
}
