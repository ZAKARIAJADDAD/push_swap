/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 23:05:38 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/03 06:33:37 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac > 1)
	{
		check_param(av, &stack_a);
		//quick_sort(&stack_a);
		if (ft_lstsize(stack_a) == 1)
		{
			ft_printf("%d", stack_a->data);
			return (0);
		}
		else if (ft_lstsize(stack_a) <= 3)
			sort_three(&stack_a);
		else if (ft_lstsize(stack_a) <= 5)
			sort_five(&stack_a, &stack_b);
		ft_printf("**********{----}**********\n");
		while (stack_a)
		{
			ft_printf("%d ", stack_a->data);
			free(stack_a);
			stack_a = stack_a->next;
		}
		ft_printf("\n**********{----}**********\n");
	}
}
