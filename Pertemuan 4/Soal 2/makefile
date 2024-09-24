CXX = g++

CXXFLAGS = -std=c++11 -Wall

TARGET = multiplication

all: $(TARGET)

$(TARGET): multiplication.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) multiplication.o

multiplication.o: multiplication.cpp
	$(CXX) $(CXXFLAGS) -c multiplication.cpp

run:
	./$(TARGET) < test.txt

clean:
	rm -f *.o $(TARGET)

Test Case:
Input: 5

Expected Output:
Masukkan angka: 5
Tabel Perkalian untuk 5:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
