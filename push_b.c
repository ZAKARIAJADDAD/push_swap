/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:21:35 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/30 16:11:20 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **head_a, t_list **head_b)
{
	t_list *tmp;

    if (!(*head_a))
        return;
    tmp = (*head_a)->next;
    if (!(*head_b))
        *head_b = ft_lstnew((*head_a)->data);
    else
    {
        (*head_a)->next = *head_b;
        *head_b = *head_a;
    }
    *head_a = tmp;
	write(1, "pb\n", 4);
}