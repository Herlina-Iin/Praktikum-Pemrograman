# Makefile for compiling sum.cpp

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g

# Target executable
TARGET = sum

# Source file
SRC = sum.cpp

# Rule to build the executable
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean rule to remove the executable and object files
clean:
	rm -f $(TARGET)

Test Case:
Input: 100
Expected Output: Jumlah dari 1 hingga 100 : 5050
