NAME = serialize

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

CC = g++

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $@
	@echo "Success" >/dev/null

%.o: %.cpp
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
