# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smhah <smhah@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 16:01:42 by smhah             #+#    #+#              #
#    Updated: 2021/12/19 17:49:08 by smhah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp fixed.cpp

FLAGS		= -Wall -Wextra -Werror

NAME		= fixed

all: 		$(NAME)

$(NAME):
			clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:		
			rm -rf $(NAME)

fclean:
			rm -rf $(NAME)

re:			fclean all
