#compiler
CC = gcc
#compiler flags
CFLAGS = -Wall
#linker flags
LDFLAGS =
#object files to build 
OBJFILES = main.o ./table/table.o ./input_buffer/input_buffer.o
#target file to build
TARGET = db

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) 
	