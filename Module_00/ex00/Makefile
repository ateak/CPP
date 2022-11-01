NAME		= megaphone

SRCS		= megaphone.cpp

OBJS		= $(SRCS:.cpp=.o)

CC			= c++

RM			= rm -f

FLAGS		= -Wall -Wextra -Werror -std=c++98

%.o:		%.cpp
			$(CC) $(FLAGS) -c $< -o $@

.PHONY :	all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all