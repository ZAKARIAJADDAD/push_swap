/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:42:07 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/22 01:27:42 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	param_error(void)
{
	write(2, "Error: No Digits", 17);
	exit(1);
}

void	check_param(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				write(2, "Error: hayd dik tkharbiqa odir digit", 37);
				exit(1);
			}
			j++;
		}
		i++;
	}
	printf("NADI LAY3TIK SEHA!!!");
}