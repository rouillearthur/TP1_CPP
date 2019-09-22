CXX = g++
CXXFLAGS = -pedantic -std=c++11 -Wall -Wextra -I./include

.PHONY: all clean

all: bin  ./bin/shop ./bin/bonusQuestion

bin :
	mkdir ./bin/

./bin/shop: src/shop.cpp include/shop.h
	$(CXX) $^ -o $@

./bin/bonusQuestion: ./src/bonusQuestion.cpp
	$(CXX) $^ -o $@

clean:
	rm -f ./bin/*
	rmdir ./bin/
