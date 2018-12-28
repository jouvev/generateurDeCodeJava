CC = gcc
CFLAGS = -Wall
EXEC = newJavaClass
SRC = newJavaClass.c utilitaire.c
OBJ = $(SRC:.c=.o)

all: $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o:%.c
	$(CC) -c $(CFLAGS) $< -o $@

newJavaClass.o : utilitaire.h

utilitaire.o : utilitaire.h

.PHONY : all clean mrproper

mrproper :
	rm -rf $(OBJ) 

clean : mrproper
	rm -rf $(EXEC)
