#include <iostream>
#include <math.h>
using namespace std;
void nhapsothuc (float &x)
{
	cin>>x;
}
void nhapsonguyen (int &n)
{  
	cin>>n;
}
int tanggiatri (int n)
{
	n=n+1;
	return n;
} 
int giamgiatri (int n)
{
	n=n-1;
	return n;
} 
float P (float x, int n)
{ 
	float S=2018*pow(x,n);
	for(int i=2;i<=n;i++)
	{
		S+=pow(x,i)/pow(3,i-1);
	}
	return S;
}
int sum_sochan (int n)
{
	if (n<=5)
	return 0;
	else if (n%2==0 && n>5) 
		return n+sum_sochan(n-2);
		else 
		return sum_sochan (n-1);
}
int main()
{	float x;
	int n,m; 
	cout <<"\n nhap gia tri x:"; nhapsothuc (x);
	cout <<"\n nhap gia tri n:"; nhapsonguyen (n);
	cout <<"\n nhap gia tri m:"; nhapsonguyen (m);
	tanggiatri (n);
	tanggiatri (m);
	cout <<"\n P="<<P (x,n);
	cout <<"\n tong cac so chan > 5 la: "<< sum_sochan(m);
}
