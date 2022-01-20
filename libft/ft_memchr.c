/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:35:35 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/04 10:36:09 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	d;
	size_t			i;

	i = 0;
	s2 = (unsigned char *)s;
	d = (unsigned char)c;
	while (i < n && s2[i] != d)
		i++;
	if (i < n && s2[i] == d)
		return (&s2[i]);
	return (NULL);
}
