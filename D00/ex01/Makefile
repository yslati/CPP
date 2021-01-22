NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror

SRC = PhoneBook.cpp

HEADER = PhoneBook.hpp

all: $(NAME)

$(NAME): $(HEADER)
	@g++ $(FLAGS) $(SRC) -o $(NAME)
	@echo "Success"

clean:

fclean: clean
	@rm -rf $(NAME)

re: fclean all