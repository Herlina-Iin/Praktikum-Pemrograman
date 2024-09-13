# Makefile for comparing three numbers and finding the largest

# Compiler
CC = g++

# Compiler flags
CFLAGS = -std=c++11 -Wall

# Target executable
TARGET = largest_number

# Source files
SRCS = main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile the source file into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

# Clean rule to remove the compiled files
clean:
	rm -f $(OBJS) $(TARGET)
