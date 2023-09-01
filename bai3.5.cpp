#include <iostream>
using namespace std;

int ghpt (float a, float b, float c, float d, float e, float f, float &x, float &y) 
{
	int T;
    double det=a*e-b*d;
    if (det==0 && c!=f) 
	{
        return T=0; 
    } 
	else if (det!=0 && a!=0)
	{
        x =(c*e-b*f)/det;
        y =(a*f-c*d)/det;
        return T=1;
    }
    else 
	{
		return T=2;
	} 
}

int main()
{
    float a,b,c,d,e,f,x,y;
    cout<<"\n a="; cin >> a;
    cout<<"\n b="; cin >> b;
    cout<<"\n c="; cin >> c;
    cout<<"\n d="; cin >> d;
    cout<<"\n e="; cin >> e;
    cout<<"\n f="; cin >> f;
    if(ghpt(a,b,c,d,e,f,x,y)==0)
    {
        cout<<"\n he phuong trinh vo nghiem";
    }
    else if(ghpt(a,b,c,d,e,f,x,y)==1)
    {
        cout<<"\n he phuong trinh co 2 ngiem la: x = "<<x<<" va y = "<<y;
    }
    else
    {
        cout<<"\n he phuong trinh co vo so nghiem";
    }
}
