OBJECTS = main.o func.o Output.o
SRC = main.c func.c Output.c

CC = gcc
CFLAGS = -g -c

TARGET = main

$(TARGET) : $(OBJECTS) Header.h
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm $(OBJECTS) $(TARGET)
