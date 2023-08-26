CC = gcc
EXEC = libft.a
SRC = $(wildcard *c)
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all : $(EXEC)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(EXEC) : $(OBJ)
	ar rcs libft.a $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(EXEC)

re : clean all
