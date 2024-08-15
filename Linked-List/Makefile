main : main.o mylinkedlist.o
	gcc -Wall -o main main.o mylinkedlist.o
main.o : main.c mylinkedlist.h
	gcc -c main.c
mylinkedlist.o : mylinkedlist.c mylinkedlist.h
	gcc -c mylinkedlist.c

clean :
	rm main main.o mylinkedlist.o