# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 15:36:00 by fraqioui          #+#    #+#              #
#    Updated: 2023/08/16 15:37:31 by fraqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

FILES = main Harl

HEADERS = Harl.hpp

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
