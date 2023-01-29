/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 23:05:38 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/22 22:54:23 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a = NULL;
	t_list	*stack_b = NULL;

	if (ac > 1)
	{
		check_param(av, &stack_a);
		if (ft_lstsize(stack_a) == 3)
		{
			push_b(&stack_a, &stack_b);
			push_b(&stack_a, &stack_b);
		}
		while (stack_a->next)
		{
			printf("%d ", stack_a->data);
			stack_a = stack_a->next;
		}
		printf("%d ", stack_a->data);
		if (stack_b)
		{
			printf("\n%d", stack_b->data);
			stack_b = stack_b->next;
			printf(" %d", stack_b->data);
		}
		
	}
}
