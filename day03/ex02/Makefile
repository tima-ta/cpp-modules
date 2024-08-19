# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 08:59:30 by fraqioui          #+#    #+#              #
#    Updated: 2023/09/20 08:28:25 by fraqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

FILES = main ClapTrap ScavTrap FragTrap

HEADERS = FragTrap.hpp

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
