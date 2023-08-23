CC = gcc -Wall -Werror -Wextra
EXEC = libft.a
SRC = $(wildcard *c)
OBJ = $(SRC:.c=.o)

all : $(EXEC)

%.o : %.c
	$(CC) -o $@ -c $<

$(EXEC) : $(OBJ)
	ar rcs libft.a $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(EXEC)

re : clean all
