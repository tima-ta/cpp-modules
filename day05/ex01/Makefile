# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 08:32:19 by fraqioui          #+#    #+#              #
#    Updated: 2023/08/29 08:32:28 by fraqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed 

CC = c++ 
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

FILES =	main Fixed

FOBJ = ${FILES:=.o}

.PHONY : all clean fclean re

all: ${NAME}

${NAME}: ${FOBJ} 
	${CC} ${FLAGS} ${FOBJ} -o ${NAME}

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${FOBJ}
fclean: clean
	${RM} ${NAME}
re: fclean all