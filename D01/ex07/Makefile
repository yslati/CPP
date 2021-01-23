NAME = replace

FLAGS = -Wall -Wextra -Werror

SRC = 

HEADER = replace.hpp

all: $(NAME)

$(NAME): $(HEADER)
	@g++ $(FLAGS) $(SRC) -o $(NAME)
	@echo "Success"

clean:

fclean: clean
	@rm -rf $(NAME)

re: fclean all