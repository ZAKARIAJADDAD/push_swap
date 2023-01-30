/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:44:42 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/30 17:56:35 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *s)
{
	ati	var;

	var.i = 0;
	var.result = 0;
	var.sign = 1;
	while ((s[var.i] == ' ' || (s[var.i] >= 9 && s[var.i] <= 13)))
		var.i++;
	if (s[var.i] == '+' || s[var.i] == '-')
	{
		if (s[var.i] == '-')
			var.sign = -1;
		var.i++;
	}
	while (s[var.i])
	{
		if (s[var.i] < '0' || s[var.i] > '9')
			param_error();
		var.result = var.result * 10 + (s[var.i] - 48);
		var.i++;
	}
	if (var.result > INT_MAX && var.sign == 1)
		param_error();
	if (var.result > 2147483648 && var.sign == -1)
		param_error();
	return (var.result * var.sign);
}
