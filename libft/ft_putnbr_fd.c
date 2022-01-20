/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:53:45 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/09 12:18:17 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	result;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		result = -n;
	}
	else
		result = n;
	if (result > 9)
	{
		ft_putnbr_fd(result / 10, fd);
		result = result % 10;
	}
	ft_putchar_fd(result % 10 + '0', fd);
}
