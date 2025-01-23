# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 14:35:40 by mfuente-          #+#    #+#              #
#    Updated: 2024/12/06 17:06:40 by mfuente-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	Base
SCRS =	./src/Base.cpp\
		./src/main.cpp\

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
	@echo "${GREEN}------✅ex02 COMPILED✅-------${RESET}"

clean:
	@$(RM) $(OBJ)
	@echo "${BLUE}------✅CLEAN ACTIVATE✅-------${RESET}"

fclean: clean
	@$(RM) $(NAME)
	@echo "${BLUE}------✅FCLEAN ACTIVATE✅-------${RESET}"

re: fclean $(NAME)


.Phony: all clean fclean re