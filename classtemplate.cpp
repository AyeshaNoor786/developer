#include<iostream>
using namespace std;

template <class T>
class Calculator
{
	private:
		T num1,num2;
	public:
		Calculator(T n1,T n2)
		{
			num1=n1;
			num2=n2;
		}
		void display()
		{
			cout<<"Numbers: "<<num1<<" "<<num2<<endl;
			cout<<"Addition: "<<add()<<endl;
			cout<<"Subtraction: "<<subtract()<<endl;
			cout<<"Multiplication: "<<multiply()<<endl;
			cout<<"Division: "<<div()<<endl;
		}
		T add()
		{
			return num1+num2;
		}
		T subtract()
		{
			return num1-num2;
		}
		T multiply()
		{
			return num1*num2;
		}
		T div()
		{
			return num1/num2;
		}
};

int main()
{
	Calculator<int> intcalc(5,2);
	Calculator<float> floatcalc(5,2);
	
	cout<<"Int Result: "<<endl;
	intcalc.display();
	
	cout<<endl<<endl<<"Float Result: "<<endl;
	floatcalc.display();
}