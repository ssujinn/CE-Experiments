OBJECTS = main.o
SRC = main.cpp

CC = g++
CFLAGS = -g -c

TARGET = main

$(TARGET) : $(OBJECTS) array.h growablearray.h
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm $(OBJECTS) $(TARGET)
