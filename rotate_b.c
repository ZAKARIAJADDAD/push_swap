/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:23:04 by marvin            #+#    #+#             */
/*   Updated: 2023/01/28 01:23:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_list **head_b)
{
	t_list	*tmp;
	t_list	*last_node;

	if(*head_b == NULL || (*head_b)->next == NULL)
        return;
	tmp = *head_b;
	last_node = ft_lstlast(tmp);
	*head_b = (*head_b)->next;
	last_node->next = tmp;
	tmp->next = NULL;
}
