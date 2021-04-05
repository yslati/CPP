NAME = serialize

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp

# HEADER = conversion.hpp

all: $(NAME)

$(NAME):
	@g++ $(FLAGS) $(SRC) -o $(NAME)
	@echo "Success" >/dev/null

clean:

fclean: clean
	@rm -rf $(NAME)

re: fclean all