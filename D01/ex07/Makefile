NAME = replace

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp

all: $(NAME)

$(NAME):
	@g++ $(FLAGS) $(SRC) -o $(NAME)
	@echo "Success"

clean:

fclean: clean
	@rm -rf $(NAME)

re: fclean all