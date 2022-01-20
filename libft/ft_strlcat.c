/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:13:43 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/15 16:43:01 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = size;
	while (*dst)
	{
		dst++;
		if (j > 0)
			j--;
	}
	while (*src && j > 1)
	{
		*dst++ = *src++;
		j--;
	}
	*dst = '\0';
	if (size > dst_len)
		return (dst_len + src_len);
	return (size + src_len);
}
