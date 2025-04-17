NAME_SULLY = Sully
NAME_GRACE = Grace
NAME_COLLEEN = Colleen

SRC_SULLY = Sully.c
SRC_GRACE = Grace.c
SRC_COLLEEN = Colleen.c

OBJ_SULLY = $(SRC_SULLY:.c=.o)
OBJ_GRACE = $(SRC_GRACE:.c=.o)
OBJ_COLLEEN = $(SRC_COLLEEN:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME_SULLY) $(NAME_GRACE) $(NAME_COLLEEN)

$(NAME_SULLY): $(OBJ_SULLY)
	$(CC) $(CFLAGS) $(OBJ_SULLY) -o $(NAME_SULLY)

$(NAME_GRACE): $(OBJ_GRACE)
	$(CC) $(CFLAGS) $(OBJ_GRACE) -o $(NAME_GRACE)

$(NAME_COLLEEN): $(OBJ_COLLEEN)
	$(CC) $(CFLAGS) $(OBJ_COLLEEN) -o $(NAME_COLLEEN)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_SULLY) $(OBJ_GRACE) $(OBJ_COLLEEN) Sully_4.o Sully_3.o Sully_2.o Sully_1.o Sully_0.o

fclean: clean
	rm -f $(NAME_SULLY) $(NAME_GRACE) $(NAME_COLLEEN) Sully_4.c Sully_3.c Sully_2.c Sully_1.c Sully_0.c Sully_0 Sully_1 Sully_2 Sully_3 Sully_4

re: fclean all

.PHONY: all clean fclean re