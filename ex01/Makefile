NAME := template_iteration_executable

CC := c++
FLAGS := -Wall -Werror -Wextra

SRC_DIR := src/
OBJ_DIR := obj/

SRC := main.cpp

OBJ:= $(addprefix $(OBJ_DIR), $(SRC:%.cpp=%.o))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all
