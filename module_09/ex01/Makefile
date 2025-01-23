# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 12:25:30 by mfuente-          #+#    #+#              #
#    Updated: 2024/12/16 13:41:15 by mfuente-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rpn
SCRS =	RPN.cpp\
		main.cpp\

GREEN = `tput setaf 2`
BLUE = `tput setaf 4`
RESET = `tput sgr0`

OBJS = $(SCRS:.c=.o)

RM = rm -f
COMPILER = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

all:	$(NAME)
$(NAME): $(OBJS)
	@$(COMPILER) $(CFLAGS) -o $@ $(SCRS)
	@echo "${GREEN}------✅ex01 COMPILED✅-------${RESET}"

clean:
	@$(RM) $(OBJ)
	@echo "${BLUE}------✅CLEAN ACTIVATE✅-------${RESET}"

fclean: clean
	@$(RM) $(NAME)
	@echo "${BLUE}------✅FCLEAN ACTIVATE✅-------${RESET}"

re: fclean $(NAME)


.Phony: all clean fclean re