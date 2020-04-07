# Use the C++ compiler to link
LINK.o = $(LINK.cc)
# Flags to compile for the debugger
CXXFLAGS =-Wall -g --coverage
 
# when running for timing, compile with -O3 (change -g -O3)

all: fig08_13

runtests: fig08_13.o
runtests.o: fig08_13.cpp

coverage: 
	echo "Did you compile with --coverage?"
	./runtests
	gcov fig08_13.cpp -m
	lcov --capture --directory . --output-file coverage.info
	mkdir -p out
	genhtml coverage.info --output-directory out
clean:
	rm -f fig08_13 *.o
