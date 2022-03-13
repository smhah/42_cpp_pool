# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smhah <smhah@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 16:01:42 by smhah             #+#    #+#              #
#    Updated: 2022/02/11 07:04:01 by smhah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp

FLAGS		= -Wall -Wextra -Werror -fsanitize=address -g

NAME		= iter

all: 		$(NAME)

$(NAME):
			c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:		
			rm -rf $(NAME)

fclean:
			rm -rf $(NAME)

re:			fclean all
