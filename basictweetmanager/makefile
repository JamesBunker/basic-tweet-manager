CC=gcc
CFLAGS=-Wall -std=c99

A4: helper1.o helper2.o dequeue.o enqueue.o isEmpty.o printQueue.o reverse.o sortID.o sortUsername.o testA4.o 
	$(CC) $(CFLAGS) helper1.o helper2.o dequeue.o enqueue.o isEmpty.o printQueue.o reverse.o sortID.o sortUsername.o testA4.o -o A4

helper1.o: helper1.c headerA4.h
	$(CC) $(CFLAGS) -c helper1.c

helper2.o: helper2.c headerA4.h
	$(CC) $(CFLAGS) -c helper2.c

dequeue.o: dequeue.c headerA4.h
	$(CC) $(CFLAGS) -c dequeue.c

enqueue.o: enqueue.c headerA4.h
	$(CC) $(CFLAGS) -c enqueue.c

isEmpty.o: isEmpty.c headerA4.h
	$(CC) $(CFLAGS) -c isEmpty.c

printQueue.o: printQueue.c headerA4.h
	$(CC) $(CFLAGS) -c printQueue.c

reverse.o: reverse.c headerA4.h
	$(CC) $(CFLAGS) -c reverse.c

sortID.o: sortID.c headerA4.h
	$(CC) $(CFLAGS) -c sortID.c

sortUsername.o: sortUsername.c headerA4.h
	$(CC) $(CFLAGS) -c sortUsername.c

testA4.o: testA4.c headerA4.h
	$(CC) $(CFLAGS) -c testA4.c

clean :
	rm *.o A4