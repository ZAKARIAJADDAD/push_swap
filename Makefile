# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 18:02:56 by zjaddad           #+#    #+#              #
#    Updated: 2023/02/14 05:02:36 by zjaddad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
CFLAGS= -Wall -Wextra -Werror
NAME=push_swap
BONUS=checker

SRCS= Mandatory/push_swap.c Mandatory/ft_errors.c Mandatory/ft_lst.c\
	Mandatory/swap_a.c Mandatory/swap_b.c Mandatory/rotate_a.c Mandatory/rotate_b.c\
	Libft/ft_atoi.c Libft/ft_split.c Mandatory/rev_rotate_a.c Mandatory/rev_rotate_b.c\
	Mandatory/push_a.c Mandatory/push_b.c Libft/ft_substr.c Libft/ft_strlen.c Libft/libft_utils.c\
	Mandatory/sort_three.c Mandatory/sort_five.c Printf/ft_printf.c Printf/ft_printf_utils.c\
	Mandatory/sort_hundert.c Mandatory/indexing.c Mandatory/sort_ten.c\
	Mandatory/hundert_utils.c Mandatory/big_sort.c

SRCS_B=Bonus/checker.c get_next_line/get_next_line_utils.c get_next_line/get_next_line.c\
	Printf/ft_printf.c Printf/ft_printf_utils.c Libft/ft_atoi.c Libft/ft_split.c Libft/ft_substr.c\
	Mandatory/ft_lst.c \
	Mandatory/ft_errors.c Libft/ft_strncmp.c Bonus/action_1.c Bonus/action_2.c Bonus/action_3.c

OBJS= $(SRCS:.c=.o)
OBJ= $(SRCS_B:.c=.o)

all:$(NAME)

bonus:$(BONUS)

$(NAME):$(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(BONUS):$(OBJ)
	$(CC) $(OBJ) -o $(BONUS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJ)
	
fclean:
	rm -f $(NAME) $(BONUS) $(OBJS) $(OBJ)
	
re: fclean all

.PHONY: clean fclean all re bonus