/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:22:36 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/22 00:23:19 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **head_a)
{
	t_list	*tmp;
	 if (*head_a == NULL || (*head_a)->next == NULL)
        return;
    tmp = (*head_a)->next;
    (*head_a)->next = tmp->next;
    tmp->next = *head_a;
    *head_a = tmp;
}

void	ss(t_list **head_a, t_list **head_b)
{
	if ((*head_b == NULL || (*head_b)->next == NULL)
		&& (*head_a == NULL || (*head_a)->next == NULL))
		return;
	swap_a(&(*head_a));
	swap_b(&(*head_b));
}