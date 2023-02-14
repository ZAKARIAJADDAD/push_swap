/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:21:24 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/03 22:30:45 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;

	if (!head_b)
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
	write(1, "pa\n", 3);
}
