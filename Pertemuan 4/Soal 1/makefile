TARGET = sum
SRC = sum.cpp

CC = g++

CFLAGS = -Wall -g

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
	rm -f *.o

run: all
	./$(TARGET) < test.txt
