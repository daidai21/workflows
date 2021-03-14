CXX=g++
LDFLAGS=-pthread
CXXFLAGS=-std=c++11 -g -O3 -Wall

try_repeat_workflow:
	g++ -std=c++11 \
		repeat_workflow_example.cpp \
		./src/utils/UUID.cpp \
		./src/utils/atomic_int.cpp \
		./src/work/default_work_report.cpp \
		-o a.out -w
	./a.out
