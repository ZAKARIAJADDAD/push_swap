/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 03:25:05 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/09 05:06:40 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_hundred(t_list **stack_a, t_list **stack_b)
{
	t_check_prams	dt;
	int				*stack_a_ord;

	dt.lent = ft_lstsize(*stack_a);
	dt.chunk = 0;
	dt.count = 0;
	stack_a_ord = get_sort_arr(stack_a);
	while (*stack_a)
	{
		dt.k = 0;
		dt.chunk += get_chunks(dt.lent);
		while (dt.k <= (dt.chunk - dt.count))
		{
			if ((*stack_a)->idx >= dt.count && (*stack_a)->idx <= dt.chunk)
			{
				to_stack_b(stack_a, stack_b, (dt.chunk + dt.count) / 2);
				dt.k++;
				dt.lent--;
			}
			else
				rotate_a(stack_a);
		}
		dt.count = dt.chunk + 1;
	}
	big_sort(stack_a, stack_b, stack_a_ord);
	//free(stack_a_ord);
}
