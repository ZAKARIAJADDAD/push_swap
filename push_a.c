/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 02:03:57 by marvin            #+#    #+#             */
/*   Updated: 2023/01/29 02:03:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;

	if (!(*head_b))
		return;
	tmp = (*head_b)->next;
	if (!(*head_a))
		*head_a = ft_lstnew((*head_a)->data);
	else
	{
		(*head_b)->next = *head_a;
		*head_a = *head_b;
	}
	*head_b = tmp;
}