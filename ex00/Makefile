# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 18:58:55 by pabad-ap          #+#    #+#              #
#    Updated: 2025/01/07 13:07:48 by pabad-ap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Polymorphism
CPP		= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADERS		= Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
SRC		= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
