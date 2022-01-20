/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:45:40 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/05 16:44:50 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*buffer1;
	unsigned char	*buffer2;

	i = 0;
	buffer1 = (unsigned char *)s1;
	buffer2 = (unsigned char *)s2;
	while (i < n)
	{
		if (buffer1[i] != buffer2[i] || buffer1[i] == '\0'
			|| buffer2[i] == '\0')
			return (buffer1[i] - buffer2[i]);
		i++;
	}
	return (0);
}
