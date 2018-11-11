Prog2: main.o add.o rem.o
	gcc main.o add.o rem.o -o Prog2

main.o:  main.c
	gcc -c main.c

add.o: add.c
	gcc -c add.c

rem.o: rem.c
	gcc -c rem.c
