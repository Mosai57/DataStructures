CC := g++
FLAGS := -Wall -std=c++11

all: HashTable

HashTable: main.o hashtable.o data.o
	$(CC) $(FLAGS) main.o hashtable.o data.o -o HashTable

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

hashtable.o: hashtable.cpp
	$(CC) $(FLAGS) hashtable.cpp

data.o: data.cpp
	$(CC) $(FLAGS) data.cpp

.PHONY: clean
clean:
	rm -rf *.o
