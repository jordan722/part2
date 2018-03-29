CXXFLAGS=-std=c++14

main: main.o indent.o
				g++ -o main main.o indent.o

main.o: main.cpp indent.h unindent.h
				g++ $(CXXFLAGS) -c main.cpp

indent.o: indent.cpp indent.h
				g++ $(CXXFLAGS) -c indent.cpp
#Q: added code
unindent.o: unindent.cpp unindent.h
				g++ $(CXXFLAGS) -c unindent.cpp

clean:
				rm -f main.o indent.o unindent.o
