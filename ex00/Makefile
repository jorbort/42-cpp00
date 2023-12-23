NAME = megaphone
CFLAG = -Wall -Werror -Wextra -g -std=c++98
SRC = megaphone.cpp
CC = c++
OBJS = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all re clean fclean