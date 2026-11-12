main: main.c myLib.o
	gcc -o lab_2 main.c myLib.o -lm

myLib.o: myLib.c myLib.h
	gcc -c myLib.c
