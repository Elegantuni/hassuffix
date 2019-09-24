test1: hassuffix.o
	gcc -o test1 main.c hassuffix.o

hassuffix.o:
	gcc -c hassuffix.c -o hassuffix.o
	
clean:
	rm -f test1 hassuffix.o
