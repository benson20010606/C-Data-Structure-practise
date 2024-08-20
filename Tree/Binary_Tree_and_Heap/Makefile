main : main.o myheaptree.o
	gcc -Wall -o main main.o myheaptree.o
main.o : main.c myheaptree.h
	gcc -c main.c
myheaptree.o : myheaptree.c myheaptree.h
	gcc -c myheaptree.c

clean :
	rm main main.o myheaptree.o