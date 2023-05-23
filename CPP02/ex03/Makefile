NAME = fixed

SRCS =	main.cpp \
		Fixed.cpp \
		Point.cpp \
		bsp.cpp

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(OBJSLIB) $(OBJSPR)
	@c++ -Wall -Werror -Wextra -std=c++98 $(OBJS) -o $(NAME)

clean:
	@rm -f *.o 

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re