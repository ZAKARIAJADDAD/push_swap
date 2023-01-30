/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:38:16 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/30 17:33:19 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack_a)
{
	t_list		*tmp;
	check_prams	val;
	
	tmp = (*stack_a)->next;
	val.frst_thr = (*stack_a)->data;
	val.snd_thr = tmp->data;
	if(ft_lstsize(*stack_a) == 2 && val.frst_thr > val.snd_thr)
		swap_a(&(*stack_a));
}