/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:03:14 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/22 01:18:57 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP__H
# define PUSH_SWAP__H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>

typedef	struct push_swap
{
	int					data;
	struct push_swap	*next;
}	t_list;

t_list	*ft_lstnew(int nb);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	param_error(void);
void	check_param(char **s);
int		ft_lstsize(t_list *lst);
int		ft_atoi(const char *s);

#endif