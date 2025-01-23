# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 13:44:41 by mfuente-          #+#    #+#              #
#    Updated: 2024/12/12 15:28:14 by mfuente-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
SCRS =	Span.cpp\
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