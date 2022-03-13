# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smhah <smhah@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 16:01:42 by smhah             #+#    #+#              #
#    Updated: 2021/12/09 14:50:10 by smhah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp

FLAGS		= -Wall -Wextra -Wno-unused -Werror

NAME		= replace

all: 		$(NAME)

$(NAME):
			clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:		
			rm -rf $(NAME)

fclean:
			rm -rf $(NAME)

re:			fclean all
