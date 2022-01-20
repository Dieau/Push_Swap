/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:42:24 by alakhdar          #+#    #+#             */
/*   Updated: 2022/01/18 15:44:44 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atol(const char	*str)
{
	long long	negatif;
	long long	resultat;

	negatif = 0;
	resultat = 0;
	while ((*str > 8 && *str < 14) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			negatif++;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultat = resultat * 10 + (*str - '0');
		str++;
	}
	if ((negatif % 2) == 1)
		return (-resultat);
	else
		return (resultat);
}
