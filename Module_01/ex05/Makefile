NAME		=	Harl

SRCS		=	main.cpp\
				Harl.cpp\

HEADER		=	Harl.hpp\

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -f

FLAGS		=	-Wall -Wextra -Werror -std=c++98

.PHONY :	all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(HEADER) Makefile
				$(CC) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all