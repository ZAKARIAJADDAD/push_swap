/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 02:04:19 by marvin            #+#    #+#             */
/*   Updated: 2023/01/29 02:04:19 by marvin           ###   ########.fr       */
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
}
