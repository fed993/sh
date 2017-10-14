# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 00:00:42 by fpolyans          #+#    #+#              #
#    Updated: 2017/10/13 19:32:01 by fpolyans         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = srcs/ft_putstr.c srcs/ft_strlen.c

OBJECTS = ft_putstr.o ft_strlen.o

MAIN = srcs/main.c

HEADERS = includes

FLAGS = -Wall -Wextra -Werror

LIBRARY = libft.a

all:
	gcc $(FLAGS) -I $(HEADERS) -o ft_strip_file $(SOURCES) $(MAIN)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(LIBRARY)

re: fclean all
