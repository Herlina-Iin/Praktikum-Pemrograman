reverse:reverse.o
  g++ reverse.o -o reverse
reverse.o: reverse.cpp
  g++ -c reverse.cpp -o reverse.o
run: reverse
  ./reverse
clean:
  rm -f reverse.o reverse
