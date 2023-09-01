#include <iostream>
#include <math.h>
using namespace std;
void nhap (float &x)
{
	cin>>x;
}
float GPT (float a, float b, float c, float &x1, float &x2)
{
	float dt;
	int T; 
	if (a==0)
	{ 
		return T=0;
	}
	else 
	{dt=b*b-4*a*c;
		if (dt<0)
		{
			return T=1;
		}
		else if (dt==0)
		{	
			x1=x2=-b/2*a;
			return T=2;
		}
		else if (dt>0)
		{
			x1=(-b+sqrt(dt))/2*a;
			x2=(-b-sqrt(dt))/2*a;
			return T=3;
		}
	}
}
int main ()
{	
	float a,b,c,x1,x2,T;
	cout<<"\n a="; nhap (a);
	cout<<"\n b="; nhap (b);
	cout<<"\n c="; nhap (c);
	GPT (a,b,c,x1,x2);
	if (GPT(a,b,c,x1,x2)==0) 
	{
		cout<<"\n phuong trinh la bac nhat";
	}
	else if (GPT(a,b,c,x1,x2)==1) 
	{
		cout<<"\n phuong trinh vo nghiem";
	}
	else if (GPT(a,b,c,x1,x2)==2) 
	{
		cout<<"\n phuong trinh co nghiem kep: x1=x2="<<x1;
	}
	else 
	{
		cout<<"\n phuong trinh co 2 nghiem phan biet: x1="<<x1<<"x2="<<x2;
	}
}
