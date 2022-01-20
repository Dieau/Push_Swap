/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:10:40 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/05 12:12:54 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*buffer;
	size_t	len;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	buffer = malloc((len + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	buffer[len] = '\0';
	while (s[i] != '\0')
	{
		buffer[i] = (*f)(i, s[i]);
		i++;
	}
	return (buffer);
}
