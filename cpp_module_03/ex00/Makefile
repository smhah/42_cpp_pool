# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smhah <smhah@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 16:01:42 by smhah             #+#    #+#              #
#    Updated: 2021/12/20 19:10:44 by smhah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp ClapTrap.cpp

FLAGS		= -Wall -Wextra -Werror

NAME		= claptrap

all: 		$(NAME)

$(NAME):
			clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:		
			rm -rf $(NAME)

fclean:
			rm -rf $(NAME)

re:			fclean all
