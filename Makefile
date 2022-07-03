all: huff

huff: testList.o linkedList.o
	gcc -Wall -g testList.o linkedList.o -o main

testList.o: testList.c
	gcc -Wall -g -c testList.c

linkedList.o: linkedList.c
	gcc -Wall -g -c linkedList.c

clean:
	rm -f *.o *.exe *.out