point: main.o point.o
	g++ main.o point.o -o point

main.o: main.cpp
	g++ -c main.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

clean:
	rm *.o point
