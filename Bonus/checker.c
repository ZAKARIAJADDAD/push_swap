/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:25 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/14 23:15:01 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include "../Mandatory/push_swap.h"

void	valid_action(char *action, t_list **stack_a, t_list **stack_b)
{
	if (ft_strncmp(action, "sa\n", 3) == 0)
		sa(stack_a);
	else if (ft_strncmp(action, "sb\n", 3) == 0)
		sb(stack_b);
	else if (ft_strncmp(action, "ra\n", 3) == 0)
		ra(stack_a);
	else if (ft_strncmp(action, "rb\n", 3) == 0)
		rb(stack_b);
	else if (ft_strncmp(action, "rra\n", 4) == 0)
		rra(stack_a);
	else if (ft_strncmp(action, "rrb\n", 4) == 0)
		rrb(stack_b);
	else if (ft_strncmp(action, "pa\n", 3) == 0)
		pa(stack_a, stack_b);
	else if (ft_strncmp(action, "pb\n", 3) == 0)
		pb(stack_a, stack_b);
	else if (ft_strncmp(action, "rr\n", 3) == 0)
		r_r(stack_a, stack_b);
	else if (ft_strncmp(action, "ss\n", 3) == 0)
		s_s(stack_a, stack_a);
	else if (ft_strncmp(action, "rrr\n", 4) == 0)
		r_r_r(stack_a, stack_a);
	else
		param_error();
}

char	*read_lines(char *lines, t_list **stack_a, t_list **stack_b)
{
	char	*get;

	get = get_next_line(0);
	while (get)
	{
		valid_action(get, stack_a, stack_b);
		lines = ft_strjoin(lines, get);
		free(get);
		get = NULL;
		get = get_next_line(0);
	}
	return (lines);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*lines;

	stack_a = NULL;
	stack_b = NULL;
	lines = NULL;
	if (ac > 1)
	{
		check_param(av, &stack_a);
		lines = read_lines(lines, &stack_a, &stack_b);
		if (!(stack_a))
			print_ko();
		if (check_order(&stack_a) && !stack_b)
			ft_printf("OK\n");
		else
			print_ko();
	}
}
