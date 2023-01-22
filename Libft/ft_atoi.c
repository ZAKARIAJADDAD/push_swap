/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:44:42 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/22 00:49:55 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *s)
{
	int					i;
	unsigned long long	result;
	int					sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9'))
	{
		result = result * 10 + (s[i] - 48);
		i++;
		if (result > __LONG_LONG_MAX__ && sign == 1)
			return (-1);
		if (result > __LONG_LONG_MAX__ && sign == -1)
			return (0);
	}
	return (result * sign);
}
