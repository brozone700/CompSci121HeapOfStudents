#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string firstName;
        string lastName;
        Address address;
        Date birthdate;
        Date expectedGradDate;
        int creditHours;
    public:
        Student();
        Student(string firstName, string lastName, Address address, Date birthdate, Date expectedGradDate, int creditHours);
        void init(string firstName, string lastName, Address address, Date birthdate, Date expectedGradDate, int creditHours);
        void init(string csvLine);
        void printStudent();
        string getLastFirst();
};
