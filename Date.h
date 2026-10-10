#include <iostream>
#include <string>
using namespace std;

class Date {
    private:
        int month;
        int day;
        int year;
    public:
        Date();
        Date(int month, int day, int year);
        void init(int month, int day, int year);
        void init(string mmddyyyy);
        void printDate();
        void printLong();
};
