CC = gcc
AR=ar
FLAGS = -Wall -g

all: isort txtfind
isort: mainisort.o isort.o
	$(CC) $(FLAGS) -o isort mainisort.o isort.o 
mainisort.o: mainisort.c isort.h
	$(CC) $(FLAGS) -c mainisort.c 
isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c 
txtfind: maintxtfind.o txtfind.o
	$(CC) $(FLAGS) -o txtfind maintxtfind.o txtfind.o 
maintxtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c maintxtfind.c 
txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so isort txtfind
