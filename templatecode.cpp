#include<iostream>
using namespace std;

//template <class T>
template <typename T>
T large(T a,T b)
{
	if(a>b)
		return a;
	else
		return b;
//	return (a>b)?a:b;
}

int main()
{
	int a,b;
	cout<<"Enter Two Integers: "<<endl;
	cin>>a>>b;
	cout<<large(a,b)<<" is larger."<<endl;
	
	float m,n;
	cout<<"Enter Two Floats: "<<endl;
	cin>>m>>n;
	cout<<large(m,n)<<" is larger."<<endl;
	
	char x,y;
	cout<<"Enter Two Characters: "<<endl;
	cin>>x>>y;
	cout<<large(x,y)<<" has larger ASCII value."<<endl;
	
}