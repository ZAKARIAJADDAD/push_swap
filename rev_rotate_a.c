/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 00:28:41 by marvin            #+#    #+#             */
/*   Updated: 2023/01/29 00:28:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_second_lstlast(t_list *lst)
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
		return;
	tmp = *head_a;
	snd_last_node = ft_second_lstlast(*head_a);
	*head_a = snd_last_node->next;
	snd_last_node->next = NULL;
	(*head_a)->next = tmp; 
}