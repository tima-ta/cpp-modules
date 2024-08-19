# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 12:58:49 by fraqioui          #+#    #+#              #
#    Updated: 2023/10/11 09:23:11 by fraqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Intern

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

FILES = main Bureaucrat AForm ShrubberyCreationForm RobotomyRequestForm PresidentialPardonForm Intern

HEADERS = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

FOBJ = ${FILES:=.o}

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${FOBJ} ${HEADERS}
	${CC} ${FLAGS} ${FOBJ} -o ${NAME}

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${FOBJ} *_shrubbery
fclean: clean
	${RM} ${NAME}
re: fclean all