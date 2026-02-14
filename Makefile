CC = gcc
CFLAGS = -Wall -g

program: fout.c
	gcc -Wall -g fout.c -o fout

clean:
	rm -f fout
