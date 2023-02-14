/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:25:46 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/03 22:31:30 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list **head_b)
{
	t_list	*tmp;

	if (*head_b == NULL || (*head_b)->next == NULL)
		return ;
	tmp = (*head_b)->next;
	(*head_b)->next = tmp->next;
	tmp->next = *head_b;
	*head_b = tmp;
	write(1, "sb\n", 3);
}
