# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/04 09:14:46 by fraqioui          #+#    #+#              #
#    Updated: 2023/08/04 09:15:40 by fraqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

FILES = main PhoneBook Contact

HEADERS = PhoneBook.hpp Contact.hpp

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
