CC	= g++

all : linkedlist.exe
	./linkedlist.exe

linkedlist.exe : student.cpp main.cpp node.cpp
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm -f *~ *.o *.exe

