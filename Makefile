NAME = array
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
RESET = \033[0m

SRCS = main.cpp Array.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp Array.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)[$(NAME)] Compiled successfully!$(RESET)"

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)[Clean] Object files removed.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)[Fclean] Executable removed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re