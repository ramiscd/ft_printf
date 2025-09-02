# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/28 19:37:17 by rdamasce          #+#    #+#              #
#    Updated: 2025/09/02 19:35:12 by rdamasce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
HDRS = ft_printf.h

SRCS = ft_printf.c ft_print_string.c ft_print_ptr.c ft_print_char.c ft_print_hex.c ft_print_nbr.c ft_print_uns.c

OBJS = $(SRCS:.c=.o)

CC = cc
FLAGS = -Wall -Wextra -Werror

.PHONY = all clean fclean

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(FLAGS) -I $(HDRS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all