#include<iostream>
#include<string>
using namespace std;



class Student 
{ 
private:
string student_name;
int student_roll_no;
float student_marks;

public:
 
Student(string name,int rollno,float mark)
{
student_name = name;
student_roll_no = rollno;
student_marks = mark;
}

void display()
{
  cout<<"\n------Student Details------"<<endl;
  cout<<"Name of The student        : "<<student_name<<endl;
  cout<<"Roll Number of the Student : "<<student_roll_no<<endl;
  cout<<"Marks of the student       : "<<student_marks<<endl;
  cout<<"------End of the Program------"<<endl;
}
};

int main()
{

string inputname;
int inputrollno;
float inputmark;

cout<<"\n------Enter the Student Detils------"<<endl;
cout<<"Enter Name of the Student        : ";
getline(cin,inputname);
cout<<"Enter Roll Number of the student : ";
cin>>inputrollno;
cout<<"Enter Marks of the sudent in %   : ";
cin>>inputmark;
Student studnt1(inputname,inputrollno,inputmark);
studnt1.display();

return 0;
}


