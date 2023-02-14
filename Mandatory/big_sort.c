/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:53:38 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/13 20:08:22 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_max_location(t_list *stack_b, int val_max)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->data == val_max)
			return (i);
		stack_b = stack_b -> next;
	}
	return (-1);
}

int	max_location(t_list *stack_b)
{
	t_list	*tmp;
	int		index;
	int		max;

	index = 0;
	tmp = stack_b;
	max = frst_bgr(&tmp);
	while (tmp)
	{
		if (tmp->data == max)
			return (index);
		index++;
		tmp = tmp->next;
	}
	return (-1);
}

void	count_down(int count, t_list **stack_a)
{
	while (count > 0)
	{
		rev_rotate_a(stack_a);
		count--;
	}
}

void	push_to_a(t_list **stack_a, t_list **stack_b, t_big *dt, int *arr_srt)
{
	if (dt->idx != -1)
	{
		if ((*stack_b)->data == arr_srt[dt->i])
		{
			push_a(stack_a, stack_b);
			dt->i--;
		}
		else if (dt->count == 0
			|| (*stack_b)->data > last_node(*stack_a))
		{
			push_a(stack_a, stack_b);
			rotate_a(stack_a);
			dt->count++;
		}
		else
			to_top_b(stack_b);
	}
	else
	{
		rev_rotate_a(stack_a);
		dt->count--;
		dt->i--;
	}
}

void	big_sort(t_list **stack_a, t_list **stack_b, int *arr_srt)
{
	t_big	dt;

	dt.i = ft_lstsize(*stack_b) - 1;
	dt.count = 0;
	while (*stack_b)
	{
		dt.idx = check_max_location(*stack_b, arr_srt[dt.i]);
		push_to_a(stack_a, stack_b, &dt, arr_srt);
	}
	free(arr_srt);
	count_down(dt.count, stack_a);
}
