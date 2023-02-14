/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:56:36 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/14 05:03:26 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_idx(t_list **stack_a, t_list **stack_b, int index)
{
	int	sz;

	sz = ft_lstsize(*stack_a) / 2;
	if (index <= sz)
	{
		while (index-- > 0)
			rotate_a(stack_a);
		push_b(stack_a, stack_b);
	}
	else if (index > sz)
	{
		while (index++ < ft_lstsize(*stack_a))
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
	idx = 0;
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
	int	check;

	i = 0;
	min = 0;
	check = ft_lstsize(*stack_a);
	if (check > 5)
		sort_ten(stack_a, stack_b);
	else
	{
		while (i < 2)
		{
			min = min_value(*stack_a);
			check_idx(stack_a, stack_b, min);
			i++;
		}
		sort_three(&(*stack_a));
		push_a(stack_a, stack_b);
		push_a(stack_a, stack_b);
	}
}
