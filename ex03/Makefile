# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 18:58:55 by pabad-ap          #+#    #+#              #
#    Updated: 2025/01/08 18:54:15 by pabad-ap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ClapTrap
CPP		= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

HEADERS		= AMateria.hpp Cure.hpp Ice.hpp Icharacter.hpp
SRC		= main.cpp AMateria.cpp Cure.cpp Ice.cpp Icharacter.cpp
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
