CC=g++

DEBUG=-g

TARGET=hello

CFLAGS= -c -Wall $(DEBUG)

all: $(TARGET)

$(TARGET): main.o
		$(CC) main.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.0 $(TARGET)
