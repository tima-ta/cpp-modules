# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 09:00:23 by fraqioui          #+#    #+#              #
#    Updated: 2023/09/20 08:35:25 by fraqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
RM = rm -rf

FILES = main ClapTrap ScavTrap FragTrap DiamondTrap

HEADERS = DiamondTrap.hpp

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

