/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundert_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 02:10:36 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/07 02:13:16 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_stack_b(t_list **stack_a, t_list **stack_b, int mid_b)
{
	t_list	*tmp;

	push_b(stack_a, stack_b);
	tmp = *stack_b;
	if (tmp->idx < mid_b)
		rotate_b(stack_b);
}

int	get_chunks(int size)
{
	if (size > 200)
		return (size / 5);
	else if (size > 100)
		return (size / 4);
	else if (size > 50)
		return (size / 3);
	else if (size > 10)
		return (size / 2);
	return (1);
}
