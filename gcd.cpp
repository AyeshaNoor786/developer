#include<iostream>
using namespace std;

// following line#6 is declaration of gcd function
// a minimal requirment before use at line 16
int gcd(int, int);

int main()
{
	int m, n;
	cout << "Enter two numbers to compute their GCD: ";
	cout << endl;
	cin >> m;
	cin >> n;

	// code from here is copied to the body of gcd function below
	cout << "G r e a t e s t  common  d i v i s o r  is : ";
	cout << gcd(m, n) << endl;

	return 0;
}

// following is definition of gcd function
int gcd(int p, int q)
{
	int r;
	r = p % q;
	while (r != 0)
	{
		p = q;
		q = r;
		r = p % q;
	}
	r = q;
	return r;
}
