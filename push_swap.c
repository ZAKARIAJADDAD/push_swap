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
	//t_list	*stack_b = NULL;

	if (ac <= 1)
		param_error();
	check_param(av, &stack_a);
}