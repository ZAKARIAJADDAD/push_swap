/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 02:13:23 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/14 03:34:14 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include "../Mandatory/push_swap.h"

void	r_r(t_list **head_a, t_list **head_b)
{
	if ((*head_b == NULL || (*head_b)->next == NULL)
		&& (*head_a == NULL || (*head_a)->next == NULL))
		return ;
	ra(head_a);
	rb(head_b);
}

void	rrb(t_list **head_b)
{
	t_list	*tmp;
	t_list	*snd_last_node;

	if (*head_b == NULL || (*head_b)->next == NULL)
		return ;
	tmp = *head_b;
	snd_last_node = ft_second_lstlast(*head_b);
	*head_b = snd_last_node->next;
	snd_last_node->next = NULL;
	(*head_b)->next = tmp;
}

void	r_r_r(t_list **head_a, t_list **head_b)
{
	if ((*head_b == NULL || (*head_b)->next == NULL)
		&& (*head_a == NULL || (*head_a)->next == NULL))
		return ;
	rra(&(*head_a));
	rrb(&(*head_b));
}

t_list	*ft_second_lstlast(t_list *lst)
{
	t_list	*last;

	last = NULL;
	if (lst)
	{
		last = lst;
		while (last->next && last->next->next)
			last = last->next;
	}
	return (last);
}

void	rra(t_list **head_a)
{
	t_list	*tmp;
	t_list	*snd_last_node;

	if (*head_a == NULL || (*head_a)->next == NULL)
		return ;
	tmp = *head_a;
	snd_last_node = ft_second_lstlast(*head_a);
	*head_a = snd_last_node->next;
	snd_last_node->next = NULL;
	(*head_a)->next = tmp;
}
