CXX = g++
CXXFLAGS = -pedantic -std=c++11 -Wall -Wextra -I./include

.PHONY: all clean

all: ./bin/shop

./bin/shop: src/shop.cpp include/shop.h
	$(CXX) $^ -o $@

clean:
	rm -f ./bin/shop *.o
