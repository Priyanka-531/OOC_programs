#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int roll;
    char name[25];

    void getdata()
    {
        cout << "\nEnter Roll No.: ";
        cin >> roll;
        cout << "\nEnter Student Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "\nRoll No. : " << roll;
        cout << "\nStudent Name : " << name << endl;
    }
};

class StudentExam : public Student
{
public:
    int sub1, sub2, sub3, sub4, sub5, sub6;
    float per;

    void accept_data()
    {
        getdata();
        cout << "\nEnter Marks for Subject 1: ";
        cin >> sub1;
        cout << "\nEnter Marks for Subject 2: ";
        cin >> sub2;
        cout << "\nEnter Marks for Subject 3: ";
        cin >> sub3;
        cout << "\nEnter Marks for Subject 4: ";
        cin >> sub4;
        cout << "\nEnter Marks for Subject 5: ";
        cin >> sub5;
        cout << "\nEnter Marks for Subject 6: ";
        cin >> sub6;
    }

    void display()
    {
        Student::display();
        cout << "\nMarks of Subject 1: " << sub1;
        cout << "\nMarks of Subject 2: " << sub2;
        cout << "\nMarks of Subject 3: " << sub3;
        cout << "\nMarks of Subject 4: " << sub4;
        cout << "\nMarks of Subject 5: " << sub5;
        cout << "\nMarks of Subject 6: " << sub6;
    }
};

class StudentResult : public StudentExam
{
public:
    void calculate()
    {
        per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0;
        cout << "\nTotal Percentage: " << per << "%" << endl;
    }
};

int main()
{
    int n;

    cout << "Enter No. of Student You Want: ";
    cin >> n;

    StudentResult s[10];

    for (int i = 0; i < n; i++)
    {
        s[i].accept_data();
    }

    for (int i = 0; i < n; i++)
    {
        s[i].display();
        s[i].calculate();
    }

    return 0;
}
