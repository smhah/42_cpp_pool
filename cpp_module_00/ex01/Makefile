SRCS		= phonebook.class.cpp phonebook.cpp


FLAGS		= -Wall -Wextra -Wno-unused -Werror

NAME		= phonebook

all: 		$(NAME)

$(NAME):
			clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:		
			rm -rf $(NAME)

fclean:
			rm -rf $(NAME)

re:			fclean all
					 