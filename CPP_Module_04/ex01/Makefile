NAME = doggy

SRC =	main.cpp\
		Animal.cpp\
		WrongAnimal.cpp\
		Dog.cpp\
		Cat.cpp\
		WrongCat.cpp\
		Brain.cpp

OBJS = $(SRC:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98 

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
    