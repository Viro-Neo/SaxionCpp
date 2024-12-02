CC	=	g++

NAME	=	SaxionCpp

SRC_PATH	=	./src/
SRC_NAME	=	main.cpp	\
				game.cpp	\
				scene.cpp	\
				sceneHandler.cpp	\
				gameObject.cpp	\
				button.cpp	\
				character.cpp	\
				spriteObject.cpp	\
				textObject.cpp	\

SRC	=	$(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ	=	$(SRC:.cpp=.o)

CFLAGS	=	-Wall -Wextra -std=c++11
CPPFLAGS	=	-I./include
LDFLAGS	=	-lsfml-graphics -lsfml-window -lsfml-system

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
