/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:24:30 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/09 20:40:20 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_b(t_list **head_b)
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
	write(1, "rrb\n", 4);
}

void	rrr(t_list **head_a, t_list **head_b)
{
	if ((*head_b == NULL || (*head_b)->next == NULL)
		&& (*head_a == NULL || (*head_a)->next == NULL))
		return ;
	rev_rotate_a(&(*head_a));
	rev_rotate_b(&(*head_b));
	write(1, "rrr\n", 4);
}
