#include<iostream>
#include<math.h>
using namespace std;
void nhapthuc( float &x)
{
	cin>>x;
}
void nhapnguyen( int &x)
{
	do
	{
		cin>>x;
	}
	while(x<=0 && cout<<"\n nhap lai");
}
float dientich(float x, float y)
{
	int S;
	S=x*y;
}
float tong(int n)
{   int S=0;
	for (int i=1; i<=n; i++)
	{
		if(i%6==0)
		{
		S+=i;
		}
	}
}
float F1( float x, int n)
{	int F1= 2016* pow(x,n);
	for (int i=1; i<=n; i++)
	{
		F1+= pow(x,i)/pow(3,i); 
	}
	return F1;
}
float F2( float x, int n)
{
	float F2;
	if (n>10)
	{
	F2= 2016*x;}
	else 
	{
	 F2= exp(x);
	for (int i=0; i<=n; i++)
	{
		F2+= i;
	}
}
return F2;
}
int main()
{
	float x,y;
	int n;
	cout<<"x: ";
	sothuc(x);
	cout<<"y: ";
	sothuc(y);
	cout<<"n: ";
	songuyen(n);
	cout<<"\n dien tich hcn: "<< dientich(x,y);
	cout<<"\n tong so chan chia het 3: "<<tong(n);
	cout<<"\n ham F1: "<<F1(x,n);
	cout<<"\n ham F2: "<<F2(x,n);
	return 0;
}
