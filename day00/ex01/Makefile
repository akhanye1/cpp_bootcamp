NAME = phonebook

CLANG = g++

FLAGS = -Wall -Wextra -Werror

SRC = phonebook.class.cpp main.cpp

all: $(NAME)

$(NAME):
	@$(CLANG) $(FLAGS) $(SRC) -o $(NAME)
	@echo "Compile Success"

clean:
	@rm $(NAME)
	@echo "Cleaning files"

fclean:
	@rm -rf $(NAME)
	@echo "Force Clean"

re: fclean all
