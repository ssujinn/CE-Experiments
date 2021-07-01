OBJECTS = str.o main.o
SRC = str.cpp main.cpp

CC = g++
CFLAGS = -g -c

TARGET = a.out

$(TARGET) : $(OBJECTS) str.h
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm $(OBJECTS) $(TARGET)
