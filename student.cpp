#include "Date.h"
#include "Address.h"
#include "Student.h"

Student::Student(){
    firstName = "";
    lastName = "";
    creditHours = 0;
}

Student::Student(string firstName, string lastName, Address address, Date birthdate, Date expectedGradDate, int creditHours){
    init(firstName, lastName, address, birthdate, expectedGradDate, creditHours);
}

void Student::init(string firstName, string lastName, Address address, Date birthdate, Date expectedGradDate, int creditHours){
    Student::firstName = firstName;
    Student::lastName = lastName;
    Student::address = address;
    Student::birthdate = birthdate;
    Student::expectedGradDate = expectedGradDate;
    Student::creditHours = creditHours;
}

void Student::init(string csvLine){
    string fields[9];
    int start = 0;

    for (int i = 0; i < 8; i++){
        int comma = csvLine.find(",", start);
        if (comma == (int)string::npos){
            cout << "Bad student line: " << csvLine << endl;
            return;
        }
        fields[i] = csvLine.substr(start, comma - start);
        start = comma + 1;
    }

    fields[8] = csvLine.substr(start);
    
    firstName = fields[0];
    lastName = fields[1];
    address.init(fields[2], fields[3], fields[4], fields[5]);
    birthdate.init(fields[6]);
    expectedGradDate.init(fields[7]);
    creditHours = stoi(fields[8]);
}

void Student::printStudent(){
    cout << firstName << " " << lastName << endl;
    address.printAddress();
    cout << "Born: ";
    birthdate.printLong();
    cout << endl;
    cout << "Expected graduation: ";
    expectedGradDate.printDate();
    cout << "Credit hours: " << creditHours << endl;
}

string Student::getLastFirst(){
    return lastName + ", " + firstName;
}
