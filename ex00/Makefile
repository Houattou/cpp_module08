# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houattou <houattou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 15:31:41 by houattou          #+#    #+#              #
#    Updated: 2023/12/05 15:01:59 by houattou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.cpp)

DEPS = $(wildcard *.tpp)

OBJ = $(SRC:.cpp=.o)

CC = c++

CXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = a.out

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(DEPS)
	$(CC) $(CXFLAGS) -c $< -o $@	
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re