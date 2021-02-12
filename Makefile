CXX=g++
LDFLAGS=-pthread
CXXFLAGS=-std=c++11 -g -O3 -Wall

try_repeat_workflow:
	g++ -std=c++11 repeat_workflow_example.cpp -o a.out
	./a.out
