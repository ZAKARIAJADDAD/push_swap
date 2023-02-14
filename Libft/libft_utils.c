/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 02:21:49 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/13 20:23:41 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*plloc;
	int		i;

	i = 0;
	plloc = malloc(ft_strlen(s1) + 1);
	if (!plloc)
		return (NULL);
	while (s1[i])
	{
		plloc[i] = s1[i];
		i++;
	}
	plloc[i] = '\0';
	return (plloc);
}
