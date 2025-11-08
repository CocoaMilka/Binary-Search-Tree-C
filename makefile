CC=gcc
BINARES=binarysearchtree binarysearchtree_debug

release: main.c binarysearchtree.c
	$(CC) -o binarysearchtree main.c binarysearchtree.c

debug: main.c binarysearchtree.c
	$(CC) -Wall -o debug_binarysearchtree main.c binarysearchtree.c

clean:
	rm -f $(BINARES) *.o
