#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string firstName;
    string lastName;
    string group;
    double averageMark;

    virtual double getScholarship() {
        if (averageMark == 5.0)
            return 2000.0;
        else
            return 1900.0;
    }
};

class Aspirant : public Student {
public:
    string scientificWork;

    double getScholarship() override {
        if (averageMark == 5.0)
            return 2500.0;
        else
            return 2200.0;
    }
};

int main() {
    Student student1;
    student1.firstName = "John";
    student1.lastName = "Doe";
    student1.group = "A1";
    student1.averageMark = 4.7;

    Aspirant aspirant1;
    aspirant1.firstName = "Jane";
    aspirant1.lastName = "Smith";
    aspirant1.group = "B2";
    aspirant1.averageMark = 5.0;

    Student* students[2] = { &student1, &aspirant1 };

    for (int i = 0; i < 2; i++) {
        cout << "Scholarship for " << students[i]->firstName << " " << students[i]->lastName << ": " << students[i]->getScholarship() << endl;
    }

    return 0;
}
