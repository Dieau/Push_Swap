# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 11:27:01 by alakhdar          #+#    #+#              #
#    Updated: 2022/01/19 11:44:36 by alakhdar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c	\
ft_isdigit.c	\
ft_isalnum.c	\
ft_isascii.c	\
ft_isprint.c	\
ft_strlen.c	\
ft_bzero.c	\
ft_strlcpy.c	\
ft_calloc.c	\
ft_memset.c	\
ft_toupper.c	\
ft_tolower.c	\
ft_strncmp.c	\
ft_strchr.c	\
ft_strrchr.c	\
ft_atoi.c	\
ft_strdup.c	\
ft_memchr.c	\
ft_strnstr.c	\
ft_strdup.c	\
ft_strjoin.c	\
ft_memcpy.c	\
ft_memmove.c	\
ft_memcmp.c	\
ft_strlcat.c	\
ft_memchr.c	\
ft_itoa.c	\
ft_substr.c	\
ft_split.c	\
ft_strtrim.c	\
ft_striteri.c	\
ft_strmapi.c	\
ft_putchar_fd.c	\
ft_putstr_fd.c	\
ft_putendl_fd.c	\
ft_putnbr_fd.c	\
ft_atol.c

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm -f

FLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${FLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS} 
	ar rcs ${NAME} ${OBJS} 

all: ${NAME}	

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all
         
.PHONY: all clean fclean re