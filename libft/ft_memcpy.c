/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:43:25 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/09 13:02:10 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict_dst, const void *restrict_src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char *)restrict_dst;
	src = (unsigned char *)restrict_src;
	if (n == 0)
	{
		return (restrict_dst);
	}
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (restrict_dst);
}
