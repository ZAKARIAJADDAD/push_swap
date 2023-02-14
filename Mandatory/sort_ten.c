/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 06:07:06 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/07 01:29:51 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_ten(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	sz;

	i = 0;
	sz = ft_lstsize(*stack_a);
	while (*stack_a && i < sz)
	{
		if ((*stack_a)->idx == i)
		{
			push_b(stack_a, stack_b);
			i++;
		}
		else
			rotate_a(stack_a);
	}
	while (*stack_b)
		push_a(stack_a, stack_b);
}
