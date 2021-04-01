NAME = convert

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp conversion.cpp

HEADER = conversion.hpp

all: $(NAME)

$(NAME): $(HEADER)
	@g++ $(FLAGS) $(SRC) -o $(NAME)
	@echo "Success" >/dev/null

clean:

fclean: clean
	@rm -rf $(NAME)

re: fclean all