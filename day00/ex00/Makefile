# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 09:40:56 by fraqioui          #+#    #+#              #
#    Updated: 2023/10/11 09:41:21 by fraqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScalarConverter

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

FILES = main ScalarConverter

HEADERS = ScalarConverter.hpp

FOBJ = ${FILES:=.o}

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${FOBJ} ${HEADERS}
	${CC} ${FLAGS} ${FOBJ} -o ${NAME}

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${FOBJ}
fclean: clean
	${RM} ${NAME}
re: fclean all