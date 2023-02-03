/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:38:16 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/03 05:48:19 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack_a)
{
	check_prams	val;

	val.frst = (*stack_a)->data;
	val.snd = (*stack_a)->next->data;
	val.trd = ft_lstlast(*stack_a)->data;
	if (ft_lstsize(*stack_a) == 2 && val.frst > val.snd)
		swap_a(stack_a);
	else if (val.trd > val.frst && val.trd > val.snd && val.snd < val.frst)
		swap_a(stack_a);
	else if (val.snd > val.trd && val.snd < val.frst && val.frst > val.trd)
	{
		swap_a(stack_a);
		rev_rotate_a(stack_a);
	}
	else if (val.snd < val.trd && val.snd < val.frst && val.frst > val.trd)
		rotate_a(stack_a);
	else if (val.snd > val.trd && val.snd > val.frst && val.trd > val.frst)
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	else if (val.snd > val.trd && val.snd > val.frst && val.frst > val.trd)
		rev_rotate_a(stack_a);
}
