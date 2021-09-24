# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 03:38:22 by eel-orch          #+#    #+#              #
#    Updated: 2021/09/24 08:25:59 by eel-orch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_memccpy.c ft_memchr.c \
	   ft_memcmp.c ft_memcpy.c  ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	   ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c  ft_itoa.c ft_strmapi.c \
	   ft_putchar_fd.c ft_putstr.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_isint.c ft_strcmp.c ft_tablen.c ft_tabdup.c

OBJS=ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isdigit.o ft_isascii.o ft_isprint.o ft_memccpy.o ft_memchr.o \
	 ft_memcmp.o ft_memcpy.o ft_memset.o ft_strchr.o ft_strdup.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o \
	 ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_substr.o ft_strjoin.o ft_strtrim.o  ft_itoa.o ft_strmapi.o \
	 ft_putchar_fd.o ft_putstr.o ft_putendl_fd.o ft_putnbr_fd.o ft_split.o ft_isint.o ft_strcmp.o ft_tablen.o ft_tabdup.o

all : $(NAME)

$(NAME) : 
	gcc -Wall -Werror -Wextra -c $(SRCS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	rm -rf $(OBJS)

fclean : 
	rm -rf $(NAME)

re : fclean all
