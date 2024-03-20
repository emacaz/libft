# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emcastil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 17:30:55 by emcastil          #+#    #+#              #
#    Updated: 2024/03/11 17:30:58 by emcastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c \
ft_toupper.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
ft_lstmap.c

OBJS = $(SRC:.c=.o)
BONUS_OBJECTS = ${BONUS:.c=.o}

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJS) ${BONUS_OBJECTS}
	$(LIB) $@ $^

bonus: ${OBJS} ${BONUS_OBJECTS} $(INCLUDE)
				@ar -rsc $(NAME) $^

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) ${BONUS_OBJECTS}

fclean: clean
	rm -f $(NAME) ${BONUS_OBJECTS}

re: fclean all

.PHONY: all clean fclean re
