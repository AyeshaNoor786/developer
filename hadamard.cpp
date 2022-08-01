#include<iostream>
#include<cmath>
#include<string>

using namespace std;

void print(bool **h, int len)
{
	char block = char(219);
	char patrn = char(176);
	for(int j=0; j<len; j++){
		for(int k=0; k<len; k++){
			if (h[j][k])
				cout << patrn << patrn;
			else
				cout << block << block;
		}
		cout << endl;
	}
	
}
void repeat(bool **h, int  len)
{
	for(int j=0; j<len; j++)
		for(int k=0; k<len; k++)
			h[j][len+k] = h[j][k];
	for(int j=0; j<len; j++)
		for(int k=0; k<len; k++)
			h[len+j][k] = h[j][k];
	for(int j=0; j<len; j++)
		for(int k=0; k<len; k++)
			h[len+j][len+k] = !(h[j][k]);
}

void hadamard(bool **h, int  len)
{
	if(len==1)
	{
		h[0][0] = true;
		return;
	}
	hadamard(h, len/2);
	repeat(h,len/2);
}

void hadamard(int n)
{
	int N = int(pow(2,n));
	bool **h = new bool*[N];
	for(int j=0; j<N; j++)
		h[j] = new bool[N];

	hadamard(h, N);
	print(h, N);

	for(int j=0; j<N; j++)
		delete[] h[j];
	delete[] h;
}

int main()
{
	cout << "n? ";
	int n;
	cin >> n;
	hadamard(n-1);
	return 0;
}