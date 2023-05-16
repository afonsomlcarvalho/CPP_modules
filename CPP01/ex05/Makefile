NAME = Harl

SRCS =	Harl.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS) $(OBJSLIB) $(OBJSPR)
	@c++ -Wall -Werror -Wextra -std=c++98 $(OBJS) -o $(NAME)

clean:
	@rm -f *.o 

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re