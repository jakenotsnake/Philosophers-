# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtanner <jtanner@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 13:11:13 by jtanner           #+#    #+#              #
#    Updated: 2022/10/13 13:55:44 by jtanner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
CC = gcc
FLAGS = -Wall -Wextra -Werror -g 
RM = rm -f
LINKS = -I./includes -pthread -framework OpenGL \
	   	-framework Appkit

SRCS_DIR = srcs/

FILES = Main \
		init \
		things \

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) $(LINKS)

$(OBJS): %.o : %.c
	gcc $(FLAGS) -c -o $@ $< 
	
clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean

