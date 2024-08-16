main : main.o mylinkedlist.o myqueue.o
	gcc -Wall -o main main.o mylinkedlist.o myqueue.o
main.o : main.c mylinkedlist.h myqueue.h
	gcc -c main.c
mylinkedlist.o : mylinkedlist.c mylinkedlist.h
	gcc -c mylinkedlist.c
	
myqueue.o : myqueue.c myqueue.h mylinkedlist.h
	gcc -c myqueue.c

clean :
	rm main main.o mylinkedlist.o myqueue.o