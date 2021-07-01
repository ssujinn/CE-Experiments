OBJECTS = main.o String_Manipulation.o Output.o
SRC = main.cpp String_Manipulation.cpp Output.cpp

CC = g++

TARGET = main
CPPFLAGS = -g -c

$(TARGET): $(OBJECTS) Header.h
	$(CC) -o $(TARGET) $(OBJECTS)

clean: 
	rm $(OBJECTS) $(TARGET)
	
