/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundert_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 02:10:36 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/09 04:38:03 by zjaddad          ###   ########.fr       */
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

int	get_chunks(int check)
{
	if (check > 200)
		return (check / 5);
	else if (check > 100)
		return (check / 4);
	else if (check > 50)
		return (check / 3);
	else if (check > 10)
		return (check / 2);
	return (1);
}
