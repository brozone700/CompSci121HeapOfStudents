#include "Date.h"

Date::Date(){
    month = 1;
    day = 1;
    year = 1900;
}

Date::Date(int month, int day, int year){
    init(month, day, year);
}

void Date::init(int month, int day, int year){
    Date::month = month;
    Date::day = day;
    Date::year = year;
}

void Date::init(string mmddyyyy){
    int firstSlash = mmddyyyy.find("/");
    int secondSlash = mmddyyyy.find("/", firstSlash + 1);

    month = stoi(mmddyyyy.substr(0, firstSlash));
    day = stoi(mmddyyyy.substr(firstSlash + 1, secondSlash - firstSlash - 1));
    year = stoi(mmddyyyy.substr(secondSlash + 1));
}

void Date::printDate(){
    if (month < 10){
        cout << "0";
    }
    cout << month << "/";
    if (day < 10){
        cout << "0";
    }
    cout << day << "/" << year << endl;
}

void Date::printLong(){
    string names[] = {"January", "February", "March", "April","May", "June", "July", "August","September", "October", "November", "December"};
    cout << names[month - 1] << " " << day << ", " << year;
}
