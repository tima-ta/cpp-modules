# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 16:37:04 by fraqioui          #+#    #+#              #
#    Updated: 2023/10/25 17:07:22 by fraqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

FILES = main BitcoinExchange

HEADERS = BitcoinExchange.hpp

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