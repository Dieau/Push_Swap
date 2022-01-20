/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:28:32 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/08 15:34:33 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*buffer;

	i = 0;
	j = 0;
	buffer = malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			buffer[j] = s[i];
			j++;
		}
		i++;
	}	
	buffer[j] = '\0';
	return (buffer);
}
