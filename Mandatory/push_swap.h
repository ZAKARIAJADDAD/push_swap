/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:03:14 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/14 03:22:43 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<limits.h>
# include<stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct atoi
{
	int					i;
	unsigned long long	result;
	int					sign;

}	t_ati;

typedef struct s_bigger
{
	int	idx;
	int	count;
	int	i;
}	t_big;

typedef struct data
{
	int		i;
	int		j;
	int		frst;
	int		snd;
	int		trd;
	int		k;
	int		lent;
	int		count;
	int		chunk;
	int		size;
}	t_check_prams;

typedef struct push_swap
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
////////////////////PRINTF///////////////////////
int		ft_putstr(char *s);
int		ft_unsnbr(unsigned int nb);
int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_hexdecimal(unsigned long nb, char *base);
int		ft_printf(const char *arg, ...);
////////////////////PRINTF///////////////////////

////////////////////ACTIONS//////////////////////
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
////////////////////ACTIONS//////////////////////
void	sort_three(t_list **stack_a);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	sort_ten(t_list **stack_a, t_list **stack_b);
void	sort_hundred(t_list **stack_a, t_list **stack_b);
void	idx_stack_value(t_list **stack_a);
void	to_stack_b(t_list **stack_a, t_list **stack_b, int mid_b);
void	big_sort(t_list **stack_a, t_list **stack_b, int	*arr_srt);
void	to_top_b(t_list **stack_b);
int		ft_lstsize(t_list *lst);
int		ft_atoi(const char *s);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
int		get_chunks(int size);
int		check_order(t_list **stack_a);
int		*get_sort_arr(t_list **stack_a);
int		frst_bgr(t_list **head_b);
int		last_node(t_list *stack);
int		max_location(t_list *stack_b);
///////////////////BONUS_ACTIONS///////////////////////////////////////
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ra(t_list **head_a);
void	rb(t_list **head_b);
void	pa(t_list **head_a, t_list **head_b);
void	pb(t_list **head_a, t_list **head_b);
void	rra(t_list **head_a);
void	rrb(t_list **head_b);
void	s_s(t_list **head_a, t_list **head_b);
void	r_r(t_list **head_a, t_list **head_b);
void	r_r_r(t_list **head_a, t_list **head_b);
///////////////////BONUS_ACTIONS///////////////////////////////////////

#endif