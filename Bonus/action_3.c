/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 02:15:47 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/14 05:00:19 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include "../Mandatory/push_swap.h"

void	pb(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;

	if (!(*head_a))
		return ;
	tmp = (*head_a)->next;
	if (!head_b)
		*head_b = ft_lstnew((*head_a)->data);
	else
	{
		(*head_a)->next = *head_b;
		*head_b = *head_a;
	}
	*head_a = tmp;
}

void	pa(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;

	if (!(*head_b))
		return ;
	tmp = (*head_b)->next;
	if (!head_a)
		*head_a = ft_lstnew((*head_a)->data);
	else
	{
		(*head_b)->next = *head_a;
		*head_a = *head_b;
	}
	*head_b = tmp;
}
