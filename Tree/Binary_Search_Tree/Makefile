main : main.o mybst.o
	gcc -Wall -o main main.o mybst.o
main.o : main.c mybst.h
	gcc -c main.c
mybst.o : mybst.c mybst.h
	gcc -c mybst.c

clean :
	rm main main.o mybst.o