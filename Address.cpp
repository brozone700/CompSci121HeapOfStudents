#include "Address.h"

Address::Address(){
    street = "";
    city = "";
    state = "";
    zip = "";
}

Address::Address(string street, string city, string state, string zip){
    init(street, city, state, zip);
}

void Address::init(string street, string city, string state, string zip){
    Address::street = street;
    Address::city = city;
    Address::state = state;
    Address::zip = zip;
}

void Address::printAddress(){
    cout << street << endl;
    cout << city << ", " << state << " " << zip << endl;
}
