/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 23:13:05 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/08 01:49:54 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(int *sort, int n)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (sort[j] > sort[j + 1])
			{
				temp = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	*get_sort_arr(t_list **stack_a)
{
	t_list	*iter;
	int		*arr;
	int		sz;
	int		i;

	i = 0;
	sz = ft_lstsize(*stack_a);
	arr = malloc(sz * sizeof(int));
	if (!arr)
		return (0);
	iter = *stack_a;
	while (iter)
	{
		arr[i++] = iter->data;
		iter = iter->next;
	}
	free(iter);
	sort(arr, ft_lstsize(*stack_a));
	return (arr);
}

void	idx_stack_value(t_list **stack_a)
{
	t_list	*tmp;
	int		*arr_sort;
	int		i;
	int		index;

	i = 0;
	index = 0;
	tmp = *stack_a;
	arr_sort = get_sort_arr(stack_a);
	while (i < ft_lstsize(*stack_a))
	{
		while (tmp)
		{
			if (arr_sort[i] == tmp->data)
			{
				tmp->idx = index;
				index++;
			}
			tmp = tmp->next;
		}
		tmp = *stack_a;
		i++;
	}
	free(arr_sort);
}
