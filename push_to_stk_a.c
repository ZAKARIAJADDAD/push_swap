/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stk_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:34:18 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/09 04:41:01 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_stack_a(t_list **stack_a, t_list **stack_b, int location)
{
	int	size;

	size = ft_lstsize(*stack_b) - 1;
	if (location <= size / 2)
	{
		while (location)
		{
			rotate_b(stack_b);
			location--;
		}
		push_a(stack_a, stack_b);
	}
	if (location > size / 2)
	{
		while (location <= size)
		{
			rev_rotate_b(stack_b);
			location++;
		}
		push_a(stack_a, stack_b);
	}
}