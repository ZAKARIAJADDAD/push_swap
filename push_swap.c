/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 23:05:38 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/30 20:41:15 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	//t_list	*stack_b;

	if (ac > 1)
	{
		check_param(av, &stack_a);
		if (ft_lstsize(stack_a) == 3)
			sort_three(&stack_a);
		printf("**********{----}**********\n");
		printf("%d\n", stack_a->data);
		stack_a = stack_a->next;
		printf("%d\n", stack_a->data);
		stack_a = stack_a->next;
		printf("%d\n", stack_a->data);
	}
}
