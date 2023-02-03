/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:25:14 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/03 06:32:43 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **head_a)
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
	write(1, "ra\n", 4);
}

void	rr(t_list **head_a, t_list **head_b)
{
	if ((*head_b == NULL || (*head_b)->next == NULL)
		&& (*head_a == NULL || (*head_a)->next == NULL))
		return ;
	rotate_a(head_a);
	rotate_b(head_b);
	write(1, "rr\n", 4);
}
