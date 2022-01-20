/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:57:18 by alakhdar          #+#    #+#             */
/*   Updated: 2022/01/19 10:51:15 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Free la stack dans son ensemble
void	free_stack(t_node **stack)
{
	t_node	*head;
	t_node	*temp;

	head = *stack;
	while (head)
	{
		temp = head;
		head = head ->next;
		free(temp);
	}
	free(stack);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

// Check si doublon
static int	is_repeat(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

// Check que les args soient bien des digits
static int	isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

// Formate argv, split, effectue les checks, dispatche les messages d'erreur
void	check_args(int argc, char **argv)
{
	int		i;
	long	tmp;	

	i = 0;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (!*argv)
			return ;
	}
	else
		i = 1;
	while (argv[i])
	{
		tmp = ft_atoi(argv[i]);
		if (!isnum(argv[i]) || is_repeat(tmp, argv, i) || !*argv[i])
			error_msg("Error");
		tmp = ft_atol(argv[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			error_msg("Error");
		i++;
	}
	if (argc == 2)
		ft_free(argv);
}
