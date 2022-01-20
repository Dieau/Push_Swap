/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:46:57 by alakhdar          #+#    #+#             */
/*   Updated: 2022/01/10 16:35:02 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Crée une nouvelle node
t_node	*create_node(int number)
{
	t_node	*new_node;

	new_node = (t_node *) malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node -> number = number;
	new_node -> index = -1;
	new_node -> next = NULL;
	return (new_node);
}

// Renvoie la dernière node de la liste
t_node	*get_last(t_node *head)
{
	if (!head)
		return (NULL);
	while (head -> next)
		head = head -> next;
	return (head);
}

// Ajoute une node en début de liste
void	add_node_front(t_node **stack, t_node *new_node)
{
	if (!new_node)
		return ;
	new_node -> next = *stack;
	*stack = new_node;
}

// Ajoute une node en fin de liste
void	add_node_back(t_node **stack, t_node *new_node)
{
	t_node	*temp;

	if (!new_node)
		return ;
	if (*stack)
	{
		temp = get_last(*stack);
		temp -> next = new_node;
	}
	else
		*stack = new_node;
}
