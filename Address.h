#include <iostream>
#include <string>
using namespace std;

class Address {
    private:
        string street;
        string city;
        string state;
        string zip;
    public:
        Address();
        Address(string street, string city, string state, string zip);
        void init(string street, string city, string state, string zip);
        void printAddress();
};
