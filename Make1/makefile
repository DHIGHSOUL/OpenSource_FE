CC = gcc
CFLAGS = -c -o3 -Wall
LDFLAGS =
all: hello myprog
hello: hello.o
	$(CC) $< -o $@
hello.o: hello.c
	$(CC) $(CFLAGS) $< -o $@ # $<는? $@는?
myprog: myprog.o
	$(CC) $(LDFLAGS) $< -o $@ # $<는? $@는?
myprog.o: myprog.c
	$(CC) $(CFLAGS) $< -o $@ # $<는? $@는?
clean:
	rm -rf *.o hello myprog