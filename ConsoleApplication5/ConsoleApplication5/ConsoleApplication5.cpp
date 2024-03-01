#include <iostream>
#include <string>
using namespace std;
class User {
private:
    string name;
    int age;

public:
    void setName(const string& newName) {
        name = newName;
    }

    string getName() {
        return name;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    int getAge() {
        return age;
    }
};

class Worker : public User {
private:
    int salary;

public:
    void setSalary(int newSalary) {
        salary = newSalary;
    }

    int getSalary() {
        return salary;
    }
};

class Driver : public Worker {
private:
    int experience;
    char drivingCategory;

public:
    // Дополнительные методы и свойства для класса Driver могут быть добавлены по аналогии с классом Worker.
};

int main() {
    Worker ivan;
    ivan.setName("Иван");
    ivan.setAge(25);
    ivan.setSalary(1000);

    Worker vasya;
    vasya.setName("Вася");
    vasya.setAge(26);
    vasya.setSalary(2000);

    double averageSalary = (ivan.getSalary() + vasya.getSalary()) / 2.0;
    std::cout << "Средняя зарплата: " << averageSalary << std::endl;

    return 0;
}
