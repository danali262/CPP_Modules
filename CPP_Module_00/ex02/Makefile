NAME = account

SRC =	tests.cpp\
		Account.cpp

OBJS = $(SRC:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra 

CC = clang++

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o:	%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: fclean all 
    