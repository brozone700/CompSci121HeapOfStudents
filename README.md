# CompSci121HeapOfStudents

```mermaid
classDiagram
    class Date {
        -int month
        -int day
        -int year
        +Date()
        +init(int month, int day, int year) void
        +initFromString(string mmddyyyy) void
        +isValid() bool
        +printShort() void
        +printLong() void
    }

    class Address {
        -string street
        -string city
        -string state
        -string zip
        +Address()
        +init(string street, string city, string state, string zip) void
        +print() void
    }

    class Student {
        -string firstName
        -string lastName
        -Address address
        -Date birthdate
        -Date expectedGradDate
        -int creditHours
        +Student()
        +init(string firstName, string lastName, Address address, Date birthdate, Date expectedGradDate, int creditHours) void
        +print() void
    }

    Student *-- "1" Address : address
    Student *-- "1" Date : birthdate
    Student *-- "1" Date : expectedGradDate
```
