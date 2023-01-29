/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:03:14 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/22 22:37:25 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP__H
# define PUSH_SWAP__H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<limits.h>

typedef struct data
{
	int	i;
	int	j;
}	data;


typedef	struct push_swap
{
	int					data;
	int					idx;
	struct push_swap	*next;
}	t_list;

t_list	*ft_lstnew(int nb);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_second_lstlast(t_list *lst);
size_t	ft_strlen(const char *s);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	param_error(void);
void	check_param(char **av, t_list **stk_a);
void	swap_a(t_list **stack_a);
void	swap_b(t_list **stack_b);
void	rotate_a(t_list **head_a);
void	rotate_b(t_list **head_b);
void	push_a(t_list **head_a, t_list **head_b);
void	push_b(t_list **head_a, t_list **head_b);
void	rev_rotate_a(t_list **head_a);
void	rev_rotate_b(t_list **head_b);
void	ss(t_list **head_a, t_list **head_b);
void	rr(t_list **head_a, t_list **head_b);
void	rrr(t_list **head_a, t_list **head_b);
int		ft_lstsize(t_list *lst);
int		ft_atoi(const char *s);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);

#endif