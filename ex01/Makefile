NAME = Phonebook
CFLAG = -Wall -Werror -Wextra -g -std=c++98
SRC = main.cpp
CC = c++
OBJS = $(SRC:.cpp=.o)
HEADER = program.h

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all re clean fclean