# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 13:12:53 by alakhdar          #+#    #+#              #
#    Updated: 2022/01/19 11:49:02 by alakhdar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
LIB		=	libft/libft.a
HEADER		=	/includes/push_swap.h

CFLAGS = -Wall -Wextra -Werror
CC = gcc
LFT = -L libft -lft

SRCS		=	src/small_sort.c src/main.c src/ps.c \
				src/rotate.c src/operations.c src/push_swap.c \
				src/list.c src/checks.c src/stack.c

OBJS		=	$(patsubst %.c,%.o,$(SRCS))

all : lib $(NAME)

$(NAME):${OBJS} ${INCLUDES} ${LIB} Makefile
	@$(CC) $(LFT) $(CFLAGS) $(OBJS) -I includes -o $(NAME)

lib:
	make -C ./libft

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS) $(BONUS_OBJS)
	$(MAKE) clean -C ./libft

fclean : clean
	rm -f $(NAME) $(BONUS)
	$(MAKE) fclean -C ./libft

re : fclean all

.PHONY : all clean bonus fclean re