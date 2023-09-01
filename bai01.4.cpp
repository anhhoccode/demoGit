#include <iostream>
using namespace std;
int sochuso (int n)
{
	if (n==0)
	{
		return 0;
	} else {
		return 1+sochuso(n/10);
	}
} 
int main()
{	int n;
	cout<<"\n nhap vao so nguyen n:"; cin>>n;
	cout<<"\n n co so chu so la:"<<sochuso(n);
}
