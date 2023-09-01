#include <iostream>
#include <math.h>
using namespace std;
float F (int x, int n)
{
	if (n==0)
	{
		return 2017;
	} else {
		return pow(x,n)+F(x,n-1);
	}
}
int main()
{	int x,n;
	cout<<"\n nhap gia tri x:"; cin>>x;
	cout<<"\n nhap gia tri n:"; cin>>n;
	float KQ=F (x,n);
	cout<<"\n ket qua la:"<<KQ;
}
