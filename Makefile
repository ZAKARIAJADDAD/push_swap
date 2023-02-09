# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 18:02:56 by zjaddad           #+#    #+#              #
#    Updated: 2023/02/09 01:34:01 by zjaddad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc -g
#CFLAGS= -Wall -Wextra -Werror
AR= ar -rc

SRCS= push_swap.c ft_errors.c ft_lst.c swap_a.c swap_b.c rotate_a.c rotate_b.c\
	 Libft/ft_atoi.c  Libft/ft_split.c rev_rotate_a.c rev_rotate_b.c push_a.c push_b.c\
	 Libft/ft_substr.c  Libft/ft_strlen.c Libft/libft_utils.c sort_three.c sort_five.c\
	 Printf/ft_printf.c Printf/ft_printf_utils.c sort_hundert.c indexing.c sort_ten.c\
	 hundert_utils.c push_to_stk_a.c big_sort.c

NAME=push_swap

OBJS= $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	
fclean:
	rm -f $(NAME) $(OBJS)
	
re: fclean all

.PHONY: clean fclean all re