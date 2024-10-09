NAME = Materials
SCRS =	./src/AMateria.cpp\
		./src/Character.cpp\
		./src/Cure.cpp\
		./src/Ice.cpp\
		./src/main.cpp\
		./src/MateriaSource.cpp\

GREEN = `tput setaf 2`
BLUE = `tput setaf 4`
RESET = `tput sgr0`

OBJS = $(SCRS:.cpp=.o)

RM = rm -f
COMPILER = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

all:	$(NAME)
$(NAME): $(OBJS)
	@$(COMPILER) -g $(CFLAGS) -o $@ $(SCRS)
	@echo "${GREEN}------✅ex03 COMPILED✅-------${RESET}"

clean:
	@$(RM) $(OBJS)
	@echo "${BLUE}------✅CLEAN ACTIVATE✅-------${RESET}"

fclean: clean
	@$(RM) $(NAME)
	@echo "${BLUE}------✅FCLEAN ACTIVATE✅-------${RESET}"

re: fclean $(NAME)


.Phony: all clean fclean re