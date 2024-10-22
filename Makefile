CC	=	g++

NAME	=	SaxionCpp

SRC_PATH	=	./src/
SRC_NAME	=	main.cpp	\
				Character.cpp	\

SRC	=	$(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ	=	$(SRC:.cpp=.o)

CFLAGS	=	-Wall -Wextra -std=c++11
CPPFLAGS	=	-I./include

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
