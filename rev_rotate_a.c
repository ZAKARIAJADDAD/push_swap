/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:24:21 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/30 17:46:36 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	rev_rotate_a(t_list **head_a)
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
	write(1, "rra\n", 5);
}
