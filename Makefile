CC=gcc

main: main.c day1.o
	$(CC) -o main main.c day1.o

day1.o: day1.c
	$(CC) -c day1.c -o day1.o

clean:
	del main day1.o main.o