/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:42:07 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/22 22:50:15 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	param_error(void)
{
	write(2, "Error: Invalid Input.", 22);
	exit(1);
}

void	check_param(char **av, t_list **stk_a)
{
	int		i;
	int		j;
	char	**splt;
	t_list	*tmp;

	i = 1;
	while (av[i])
	{
		j = 0;
		splt = ft_split(av[i], ' ');
		while (splt[j])
		{
			tmp = *stk_a;
			while (tmp)
			{
				if (tmp->data == ft_atoi(splt[j]))
					param_error();
				tmp = tmp->next;
			}
			ft_lstadd_back(&(*stk_a), ft_lstnew(ft_atoi(splt[j])));
			j++;
		}
		free(splt);
		i++;
	}
}