/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 23:05:38 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/10 14:46:36 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	if (ac > 1)
	{
		check_param(av, &stack_a);
		idx_stack_value(&stack_a);
		if (check_order(&stack_a))
			return (0);
		if (ft_lstsize(stack_a) == 1)
			return (0);
		else if (ft_lstsize(stack_a) <= 3)
			sort_three(&stack_a);
		else if (ft_lstsize(stack_a) <= 10)
			sort_five(&stack_a, &stack_b);
		else if (ft_lstsize(stack_a) > 10)
			sort_hundred(&stack_a, &stack_b);
	}
}
