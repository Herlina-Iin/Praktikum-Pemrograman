multiplication:multiplication.o
	g++ multiplication.o -o multiplication
multiplication.o:multiplication.cpp
	g++ -c multiplication.cpp -o multiplication.o
run: multiplication
	./multiplication
clean:
	rm -f multiplication.o multiplication
