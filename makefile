.PHONY: clean
all: bin/test
test: bin/main

./bin/test: ./build/test/test_func.o ./build/src/func.o 
	g++ -Wall -I src -Werror -o ./bin/test ./build/src/func.o ./build/test/test_func.o -lm
	./bin/test

./bin/main: ./build/src/main.o ./build/src/func.o
	g++ -std=c++17 -Wall -Werror -o ./bin/main ./build/src/main.o ./build/src/func.o -lm

./build/src/main.o: ./src/main.cpp
	g++ -std=c++17 -c -o ./build/src/main.o ./src/main.cpp -lm

./build/src/func.o: ./src/func.cpp
	g++ -c -o  ./build/src/func.o ./src/func.cpp -lm

./build/test/test_func.o: ./test/test_func.cpp
	g++ -c -Wall -I src -o  ./build/test/test_func.o ./test/test_func.cpp -lm

clean:
	rm -rf bin/* build/src/*o build/test/*o

run_main:
	./bin/main

run_test:
	./bin/test
