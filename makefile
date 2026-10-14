# makefile for student

CC = g++
CFLAGS = -std=c++11 -g -Wall

student: main.o Date.o Address.o Student.o
	$(CC) $(CFLAGS) main.o Date.o Address.o Student.o -o student

main.o: main.cpp Date.h Address.h Student.h
	$(CC) $(CFLAGS) -c main.cpp

Date.o: Date.cpp Date.h
	$(CC) $(CFLAGS) -c Date.cpp

Address.o: Address.cpp Address.h
	$(CC) $(CFLAGS) -c Address.cpp

Student.o: Student.cpp Student.h Date.h Address.h
	$(CC) $(CFLAGS) -c Student.cpp

clean:
	rm -f *.o student

run: student
	./student
