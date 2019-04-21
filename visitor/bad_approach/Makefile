SOURCES :=$(wildcard *.cpp)
OBJECTS := $(subst .cpp,.o,$(SOURCES))

main : $(OBJECTS)
	g++ -std=c++17 -o $@ $^ -Wall -O2

%.o : %.cpp
	g++ -std=c++17 -o $@ -c $^ -Wall -O2

clean:
	rm *.o