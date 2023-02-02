/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:56:36 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/02 04:19:50 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_idx(t_list **stack_a, t_list **stack_b, int index)
{
	if (index == 1)
		push_b(stack_a, stack_b);
	else if (index == 2)
	{
		swap_a(stack_a);
		push_b(stack_a, stack_b);
	}
	else if (index == 3)
	{
		rotate_a(stack_a);
		swap_a(stack_a);
		push_b(stack_a, stack_b);
	}
	else if (index == 4)
	{
		rev_rotate_a(stack_a);
		push_b(stack_a, stack_b);
		rev_rotate_a(stack_a);
	}
	else if (index == 5)
	{
		rev_rotate_a(stack_a);
		push_b(stack_a, stack_b);
	}
}

int	min_value(t_list *stack_a)
{
	int		min;
	int		idx;
	t_list	*tmp;

	tmp = stack_a;
	idx = 1;
	min = tmp->data;
	while (tmp)
	{
		if (min > tmp->data)
			min = tmp->data;
		tmp = tmp->next;
	}
	tmp = stack_a;
	while (tmp)
	{
		if (min == tmp->data)
			break ;
		idx++;
		tmp = tmp->next;
	}
	return (idx);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	min;

	i = 0;
	while (i < 2)
	{
		min = min_value(*stack_a);
		check_idx(stack_a, stack_b, min);
		i++;
	}
	sort_three(&(*stack_a));
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
	if ((*stack_a)->data > (*stack_a)->next->data)
		swap_a(stack_a);
}
