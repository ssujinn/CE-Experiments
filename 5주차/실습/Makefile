OBJECTS = RangeArray.o Array.o main.o
SRC = RangeArray.cpp Array.cpp main.cpp

CC = g++
CFLAGS = -g -c

TARGET = main

$(TARGET) : $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm $(OBJECTS) $(TARGET)
