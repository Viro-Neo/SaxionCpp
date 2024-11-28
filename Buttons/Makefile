CC	=	g++

NAME	=	buttons

SRC	=	button.cpp	\
		character.cpp	\
		gameObject.cpp	\
		main.cpp	\
		scene.cpp	\
		sceneHandler.cpp	\
		spriteObject.cpp	\
		textObject.cpp

OBJ	=	$(SRC:.cpp=.o)

CFLAGS	=	-Wall -Wextra -std=c++11
LDFLAGS	=	-lsfml-graphics -lsfml-window -lsfml-system

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
