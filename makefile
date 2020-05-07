  
#!make -f

all: demo
	./$< 

demo:  main.o
	clang++-5.0 -std=c++11 $^ -o demo

%.o: %.cpp alg.hpp
	clang++-5.0 -std=c++11 --compile $< -o $@

clean:
	rm -f *.o demo 