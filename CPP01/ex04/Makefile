NAME = replace

SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME): $(OBJS) $(OBJSLIB) $(OBJSPR)
	@c++ -Wall -Werror -Wextra -std=c++98 $(OBJS) -o $(NAME)

clean:
	@rm -f *.o 

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re