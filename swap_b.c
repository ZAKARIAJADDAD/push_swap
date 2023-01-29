/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:32:58 by marvin            #+#    #+#             */
/*   Updated: 2023/01/27 00:32:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list **head_b)
{
	t_list	*tmp;
	if (*head_b == NULL || (*head_b)->next == NULL)
		return;
	tmp = (*head_b)->next;
	(*head_b)->next = tmp->next;
	tmp->next = *head_b;
	*head_b = tmp;
}
