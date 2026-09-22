#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person's constructor is called" << endl;
    }
};

class Faculty : public Person {
public:
    Faculty() {
        cout << "Faculty's constructor is called" << endl;
    }
};

class Student : public Person {
public:
    Student() {
        cout << "Student's constructor is called" << endl;
    }
};

class TA : public Faculty, public Student {
public:
    TA() {
        cout << "TA's constructor is called" << endl;
    }
};

int main() {
    TA ta;
    return 0;
}
