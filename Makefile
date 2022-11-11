# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 19:23:05 by arabiai           #+#    #+#              #
#    Updated: 2022/10/30 17:50:56 by arabiai          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# MACROS / VARIABLES OF THE MAKEFILE
NAME = get_line

SOURCES = get_next_line.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

ECHO1 = @echo "\033[92mCompiled all files successfully!\033[0m"

ECHO2 = @echo "\033[92mCompiled all BONUS files successfully!\033[0m"

OBJECTS = $(SOURCES:.c=.o)

# THE Rules NEEDED FOR THE COMPILATION / 

all : $(NAME)

$(NAME) : $(OBJECTS) libft.h
	$(ECHO1)

# # THIS IS A GENERIC RULE 
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJECTS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

