# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 18:02:56 by zjaddad           #+#    #+#              #
#    Updated: 2023/01/30 16:38:51 by zjaddad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
CFLAGS= -Wall -Wextra -Werror
AR= ar -rc

SRCS= push_swap.c ft_errors.c ft_lst.c swap_a.c swap_b.c rotate_a.c rotate_b.c\
	Libft/ft_atoi.c  Libft/ft_split.c rev_rotate_a.c rev_rotate_b.c push_a.c push_b.c\
	 Libft/ft_substr.c  Libft/ft_strlen.c Libft/libft_utils.c sort_three.c

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