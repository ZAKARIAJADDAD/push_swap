/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:25:38 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/30 17:50:48 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **head_a)
{
	t_list	*tmp;

	if (*head_a == NULL || (*head_a)->next == NULL)
		return ;
	tmp = (*head_a)->next;
	(*head_a)->next = tmp->next;
	tmp->next = *head_a;
	*head_a = tmp;
	write(1, "sa\n", 4);
}

void	ss(t_list **head_a, t_list **head_b)
{
	if ((*head_b == NULL || (*head_b)->next == NULL)
		&& (*head_a == NULL || (*head_a)->next == NULL))
		return ;
	swap_a(&(*head_a));
	swap_b(&(*head_b));
	write(1, "ss\n", 4);
}
