all: Prog2

Prog2: main.o addchar.o remchar.o end.o help.o addbuff.o rembuff.o
	gcc main.o help.o addchar.o addbuff.o remchar.o rembuff.o end.o -o Prog2

main.o:  main.c
	gcc -c main.c

help.o: help.c
	gcc -c help.c

addchar.o: addchar.c
	gcc -c addchar.c

remchar.o: remchar.c
	gcc -c remchar.c

end.o: end.c
	gcc -c end.c

addbuff.o: addbuff.c
	gcc -c addbuff.c

rembuff.o: rembuff.c
	gcc -c rembuff.c

clean: 
	rm *.o
