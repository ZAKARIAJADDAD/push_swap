/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundert_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 02:10:36 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/10 21:29:14 by zjaddad          ###   ########.fr       */
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

int	frst_bgr(t_list **head_b)
{
	t_list	*temp;
	int		max;

	temp = *head_b;
	max = temp->data;
	while (temp)
	{
		if (temp->data > max)
			max = temp->data;
		temp = temp->next;
	}
	return (max);
}

int	last_node(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp && tmp->next)
		tmp = tmp->next;
	return (tmp->data);
}

void	to_top_b(t_list **stack_b)
{
	int		size;
	t_list	*stack_tmp;
	int		index;
	int		i;

	i = 0;
	stack_tmp = *stack_b;
	size = ft_lstsize(*stack_b);
	index = max_location(*stack_b);
	if (index < (size / 2))
	{
		while (index-- > 0)
			rotate_b(stack_b);
	}
	else
	{
		while (index++ < size)
			rev_rotate_b(stack_b);
	}
}
