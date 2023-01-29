/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 01:49:42 by marvin            #+#    #+#             */
/*   Updated: 2023/01/29 01:49:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_b(t_list **head_b)
{
	t_list	*tmp;
	t_list	*snd_last_node;

	if (*head_b == NULL || (*head_b)->next == NULL)
		return;
	tmp = *head_b;
	snd_last_node = ft_second_lstlast(*head_b);
	*head_b = snd_last_node->next;
	snd_last_node->next = NULL;
	(*head_b)->next = tmp; 
}

void	rrr(t_list **head_a, t_list **head_b)
{
	if ((*head_b == NULL || (*head_b)->next == NULL)
		&& (*head_a == NULL || (*head_a)->next == NULL))
		return;
	rev_rotate_a(&(*head_a));
	rev_rotate_a(&(*head_b));
}