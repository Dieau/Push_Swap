/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:25:45 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/05 17:14:15 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*buffer;

	i = 0;
	buffer = (char *)haystack;
	size = ft_strlen(needle);
	if (size == 0 || haystack == needle)
		return (buffer);
	while (buffer[i] != '\0' && i < len)
	{
		j = 0;
		while (buffer[i + j] != '\0' && needle[j] != '\0'
			&& buffer[i + j] == needle[j] && i + j < len)
			j++;
		if (j == size)
			return (buffer + i);
		i++;
	}
	return (0);
}
