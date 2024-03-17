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

NAME = libft.a

SRCS = main.c

OBJS = $(SRCS:.c=.o)

CCFLAGS = -Wall -Wextra -Werror
CC = gcc

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)

fclean: clean
	rm -f $(OBJS) $(NAME)

.PHONY: clean all fclean