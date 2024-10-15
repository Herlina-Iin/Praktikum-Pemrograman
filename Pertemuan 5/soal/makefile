sum:sum.o
  g++ sum.o -o sum
sum.o: sum.cpp
  g++ -c sum.cpp -o sum.o
run: sum
  ./sum
clean:
  rm -f sum.o sum
