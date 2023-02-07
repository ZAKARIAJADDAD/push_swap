/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 03:25:05 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/07 02:12:01 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_hundred(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		lent;
	int		count;
	int		chunk;

	lent = ft_lstsize(*stack_a);
	chunk = 0;
	count = 0;
	while (*stack_a)
	{
		i = 0;
		chunk += get_chunks(lent);
		while (i <= (chunk - count))
		{
			if ((*stack_a)->idx >= count && (*stack_a)->idx <= chunk)
			{
				to_stack_b(stack_a, stack_b, (chunk + count) / 2);
				i++;
				lent--;
			}
			else
				rotate_a(stack_a);
		}
		count = chunk + 1;
	}
}
