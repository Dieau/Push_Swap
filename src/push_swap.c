/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:45:58 by alakhdar          #+#    #+#             */
/*   Updated: 2022/01/10 16:32:13 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Renvoie la prochaine valeur minimale de la stack
static t_node	*get_next_min(t_node **stack)
{
	t_node	*head;
	t_node	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->number < min->number))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

// Attribue leur index aux nodes de la stack lors de l'initialisation
void	index_stack(t_node **stack)
{
	t_node	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

// Dispatche vers l'algo optimal pour la taille rentrée (<5)
void	simple_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	if (stack_is_sorted(stack_a) || ft_stack_size(*stack_a) == 0
		|| ft_stack_size(*stack_a) == 1)
		return ;
	size = ft_stack_size(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
}

// Tri radix des valeurs par indexion binaire
void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	size = ft_stack_size(*stack_a);
	while (!stack_is_sorted(stack_a))
	{
		j = 0;
		while (j++ < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_stack_size(*stack_b) != 0)
			pa(stack_b, stack_a);
		i++;
	}
}
