CXX=g++
LDFLAGS=-pthread
CXXFLAGS=-std=c++11 -g -O3 -Wall

all: build tests example

build:


static_library:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -c \
		src/engine.hpp \
		src/config/work_status.hpp \
		src/utils/concurrent_hash_map.hpp \
		src/utils/thread_pool.hpp \
		src/utils/logger.cpp \
		src/utils/logger.hpp \
		src/work/work.hpp \
		src/work/work_report.hpp \
		src/work/work_context.hpp \
		src/workflow/parallel_workflow.hpp \
		src/workflow/repeat_workflow.hpp \
		src/workflow/conditional_workflow.hpp \
		src/workflow/sequential_workflow.hpp \
		src/workflow/workflow.hpp \
		src/workflow/abstract_workflow.hpp \
	# -o workflow.o
	find . | grep "\.gch" | xargs rm
	find . | grep "\.o" | xargs rm

debug:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) \
		src/engine.hpp \
		src/config/work_status.hpp \
		src/utils/concurrent_hash_map.hpp \
		src/utils/thread_pool.hpp \
		src/utils/logger.cc \
		src/utils/logger.hpp \
		src/work/work.hpp \
		src/work/work_report.hpp \
		src/work/work_context.hpp \
		src/workflow/parallel_workflow.hpp \
		src/workflow/repeat_workflow.hpp \
		src/workflow/conditional_workflow.hpp \
		src/workflow/sequential_workflow.hpp \
		src/workflow/workflow.hpp \
		src/workflow/abstract_workflow.hpp \
	valgrind --tool=memcheck\
			--leak-check=full\
			--show-leak-kinds=all\
			--track-origins=yes\
			--verbose\
			--log-file=valgrind-out.log\
			./a.out

tests:


example:


clean:

# #################### unit test ####################
UUID_test:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) \
		test/UUID_test.cpp \
		src/utils/UUID.cpp \
		-o test/UUID_test.out
	./test/UUID_test.out

logger_test:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) \
		test/logger_test.cpp \
		-o test/logger_test.out
	./test/logger_test.out
