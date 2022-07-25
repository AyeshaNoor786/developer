#include<iostream>
using namespace std;

class Student
{
	public:
		double marks1,marks2;
};

Student marks()
{
	Student s;
	s.marks1=78;
	s.marks2=92;
	cout<<"Marks1: "<<s.marks1<<endl;
	cout<<"Marks2: "<<s.marks2<<endl;
	return s;
}

int main()
{
	Student student;
	student=marks();
}