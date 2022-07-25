#include<iostream>
using namespace std;

class Base
{
	public:
		void print()
		{
			cout<<"Base Function"<<endl;
		}
};
class Derived:public Base
{
	public:
		void print()
		{
			cout<<"Derived Function"<<endl;
		}
};

int main()
{
	//Derived dev1,dev2;
	//dev1.print();
	//dev2.Base::print();
	
	Derived *dev1,*dev2;
	dev1->print();
	dev2->Base::print();
}