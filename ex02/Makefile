# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houattou <houattou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 14:28:04 by houattou          #+#    #+#              #
#    Updated: 2023/12/04 14:28:21 by houattou         ###   ########.fr        #
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