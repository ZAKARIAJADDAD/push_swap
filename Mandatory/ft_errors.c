/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:42:07 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/14 23:15:42 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	param_error(void)
{
	write(2, "Error.\n", 7);
	exit(1);
}

void	ft_free(char **tmp)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

void	empty_str(char *s)
{
	if (!s)
		param_error();
}

void	check_param(char **av, t_list **stk_a)
{
	t_check_prams	dt;
	char			**splt;
	t_list			*tmp;

	dt.i = 1;
	while (av[dt.i])
	{
		dt.j = 0;
		splt = ft_split(av[dt.i], ' ');
		empty_str(splt[0]);
		while (splt[dt.j])
		{
			tmp = *stk_a;
			while (tmp)
			{
				if (tmp->data == ft_atoi(splt[dt.j]))
					param_error();
				tmp = tmp->next;
			}
			ft_lstadd_back(&(*stk_a), ft_lstnew(ft_atoi(splt[dt.j])));
			dt.j++;
		}
		ft_free(splt);
		dt.i++;
	}
}

int	check_order(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
