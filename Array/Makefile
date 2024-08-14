main : main.o myarray.o
	gcc -Wall -o main main.o myarray.o
main.o : main.c myarray.h
	gcc -c main.c
myarray.o : myarray.c myarray.h
	gcc -c myarray.c

clean :
	rm main main.o myarray.o