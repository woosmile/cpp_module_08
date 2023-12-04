NAME = ex01

CXXFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm
RMFLAGS = -rf

HEADER = \
Span.hpp

SRCS = \
main.cpp \
Span.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean :
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

.PHONY : all clean fclean re