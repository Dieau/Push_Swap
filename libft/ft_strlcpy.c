/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:40:12 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/03 12:57:19 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	n;

	n = 0;
	if (dstsize > 0)
	{
		while (src[n] != '\0' && n < (dstsize - 1))
		{
			dst[n] = src[n];
			n++;
		}
		if (dstsize > 0)
			dst[n] = '\0';
	}
	return (ft_strlen(src));
}
