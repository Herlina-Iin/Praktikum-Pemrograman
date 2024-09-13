# Makefile for compiling quadratic equation solver

# Compiler
CC = g++

# Compiler flags
CFLAGS = -std=c++11 -Wall

# Target executable
TARGET = quadratic_solver

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
