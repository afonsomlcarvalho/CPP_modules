NAME = violence

SRCS =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

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