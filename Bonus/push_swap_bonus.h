/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:25:58 by zjaddad           #+#    #+#             */
/*   Updated: 2023/02/14 23:34:37 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<limits.h>
# include<stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

/////////////////////////GET_NEXT_LINE//////////////////////////////////
char	*ft_strchr(char *str, int c);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t n, size_t size);
char	*get_next_line(int fd);
void	ft_bzero(void *s, size_t n);
/////////////////////////GET_NEXT_LINE//////////////////////////////////

/////////////////////////LIBFT_FUNCTIONS///////////////////////////////
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	print_ko(void);
/////////////////////////LIBFT_FUNCTIONS///////////////////////////////

#endif