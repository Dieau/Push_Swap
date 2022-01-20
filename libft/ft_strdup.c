/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:27:42 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/03 17:29:24 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	int		i;
	int		len;
	char	*str2;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	str2 = (char *)malloc((len + 1) * sizeof(char));
	if (!str2)
		return (0);
	while (src[i])
	{
		str2[i] = src[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
