#include<iostream>
using namespace std;

class Student
{
	public:
		double marks;
		
		Student(double m):marks(m){}
};

void avg(Student s1,Student s2)
{
	int average=(s1.marks+s2.marks)/2;
	cout<<"Average: "<<average<<endl;
}

int main()
{
	Student s1(78),s2(92);
	avg(s1,s2);
}