/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:47:50 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/04 10:04:52 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	if (nmemb == 0)
		return (malloc(0));
	if (size == 0)
		return (malloc(0));
	tmp = malloc(nmemb * size);
	if (tmp == NULL)
		return (NULL);
	ft_memset((unsigned char *)tmp, 0, nmemb * size);
	return (tmp);
}
