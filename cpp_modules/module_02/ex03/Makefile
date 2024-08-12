NAME = Fixed
SCRS = 	Fixed.cpp\
		main.cpp\

GREEN = `tput setaf 2`
RESET = `tput sgr0`

OBJS = $(SCRS:.c=.o)

RM = rm -f
COMPILER = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

all:	$(NAME)
$(NAME): $(SCRS)
	$(COMPILER) $(CFLAGS) -o $@ $(SCRS)
	@echo "${GREEN}------✅ex02 COMPILED✅-------${RESET}"

clean: clean
	$(RM) $(NAME)

.Phony: all clean