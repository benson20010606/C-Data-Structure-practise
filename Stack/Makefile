main : main.o  mystack.o
	gcc -Wall -o main main.o mystack.o
main.o : main.c  mystack.h
	gcc -c main.c
 mystack.o :  mystack.c  mystack.h
	gcc -c  mystack.c

clean :
	rm main main.o  mystack.o