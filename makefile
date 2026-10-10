student: main.cpp Date.cpp Address.cpp Student.cpp Date.h Address.h Student.h
	g++ -std=c++11 -Wall -o student main.cpp Date.cpp Address.cpp Student.cpp

clean:
	rm -f student
