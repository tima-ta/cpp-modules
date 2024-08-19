# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 09:53:12 by fraqioui          #+#    #+#              #
#    Updated: 2023/08/14 11:39:51 by fraqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

FILES = main Weapon HumanA HumanB

HEADERS = HumanA.hpp HumanB.hpp

FOBJ = ${FILES:=.o}

.PHONY = all clean fclean re

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
