/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 03:43:07 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/09 05:20:51 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	frst_bgr(t_list **head_b, int bigger)
{
	int		mv;
	t_list	*tmp;
	
	tmp = *head_b;
	mv = 0;
	while (tmp)
	{
		if (bigger == tmp->data)
			break ;
		tmp = tmp->next;
		mv++;
	}
	return (mv);
}

int	stack_len(t_list **head_b)
{
	t_list	*tmp;
	int		i;

	tmp = *head_b;
	i = 0;
	while (tmp->next)
	{
		i++;
		tmp =tmp->next;
	}
	return (i);
}

void	big_sort(t_list **stack_a, t_list **stack_b, int *st_ord)
{
	int	i;
	// int	size;
	int	moves;
	int	moves1;

	i = stack_len(stack_b);
	//size = ft_lstsize(*stack_b);
	while (*stack_b)
	{
		moves = frst_bgr(stack_b, st_ord[i]);
		moves1 = frst_bgr(stack_b, st_ord[i - 10]);
		if (moves > moves1)
		{
			push_to_stack_a(stack_a, stack_b, moves1);
			push_to_stack_a(stack_a, stack_b, moves);
			i-=2;
		}
		else
		{
			push_to_stack_a(stack_a, stack_b, moves);
			push_to_stack_a(stack_a, stack_b, moves1);
			i-=2;
		}
		if ((*stack_a)->idx > (*stack_a)->next->idx)
			swap_a(stack_a);
	}
}
