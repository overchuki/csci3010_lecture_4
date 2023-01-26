
CXX = g++
CXXFLAGS = -std=c++20 -Wall

all: test # main

# main: main.cpp
# 	$(CXX) $(CXXFLAGS) main.cpp -o main

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

clean:
	rm main test
