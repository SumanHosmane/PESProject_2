all: Prog2

Prog2: main.o addchar.o stat.o remchar.o end.o help.o addbuff.o rembuff.o
	gcc main.o addchar.o stat.o remchar.o end.o help.o addbuff.o rembuff.o -o Prog2

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

stat.o: stat.c
	gcc -c stat.c

clean: 
	rm -rf *.o Prog2
