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

Test Case:
input: 100

Expected Output:
n: 100
jumlah dari 1 hingga 100: 5050
