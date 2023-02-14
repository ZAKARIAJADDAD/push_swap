/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 02:09:05 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/14 03:34:40 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include "../Mandatory/push_swap.h"

void	sa(t_list **head_a)
{
	t_list	*tmp;

	if (*head_a == NULL || (*head_a)->next == NULL)
		return ;
	tmp = (*head_a)->next;
	(*head_a)->next = tmp->next;
	tmp->next = *head_a;
	*head_a = tmp;
}

void	s_s(t_list **head_a, t_list **head_b)
{
	if ((*head_b == NULL || (*head_b)->next == NULL)
		&& (*head_a == NULL || (*head_a)->next == NULL))
		return ;
	sa(&(*head_a));
	sb(&(*head_b));
}

void	sb(t_list **head_b)
{
	t_list	*tmp;

	if (*head_b == NULL || (*head_b)->next == NULL)
		return ;
	tmp = (*head_b)->next;
	(*head_b)->next = tmp->next;
	tmp->next = *head_b;
	*head_b = tmp;
}

void	rb(t_list **head_b)
{
	t_list	*tmp;
	t_list	*last_node;

	if (*head_b == NULL || (*head_b)->next == NULL)
		return ;
	tmp = *head_b;
	last_node = ft_lstlast(tmp);
	*head_b = (*head_b)->next;
	last_node->next = tmp;
	tmp->next = NULL;
}

void	ra(t_list **head_a)
{
	t_list	*tmp;
	t_list	*last_node;

	if (*head_a == NULL || (*head_a)->next == NULL)
		return ;
	tmp = *head_a;
	last_node = ft_lstlast(tmp);
	*head_a = (*head_a)->next;
	last_node->next = tmp;
	tmp->next = NULL;
}
