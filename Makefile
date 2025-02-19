NAME = PhoneBook

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = 	Contact.cpp \
		main.cpp \
		PhoneBook.cpp 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@echo "PhoneBook compiled successfully!"

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "Object files cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "Executable cleaned."

re: fclean all

.PHONY: all clean fclean re