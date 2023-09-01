#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
struct DIEM
{
	int x;
	int y;
};
void nhaptoado(DIEM &d)
{
	cout<<" nhap hoanh do x: ";
	cin>>d.x;
	cout<<" nhap tung do y: ";
	cin>>d.y;
}
void xuattoado(DIEM d)
{
	cout<<"("<<d.x<<","<<d.y<<")";
}
double khoangcach(DIEM d1, DIEM d2)
{
	double kc;
	kc= sqrt(double (d1.x-d2.x)*(d1.x-d2.x)+(d1.y-d2.y)*(d1.y-d2.y));
	return kc;
}
double chuvi(DIEM d1, DIEM d2, DIEM d3)
{
	double p;
	int a= sqrt(double (d1.x-d2.x)*(d1.x-d2.x)+(d1.y-d2.y)*(d1.y-d2.y));
	int b= sqrt(double (d2.x-d3.x)*(d2.x-d3.x)+(d2.y-d3.y)*(d2.y-d3.y));
	int c= sqrt(double (d3.x-d1.x)*(d3.x-d1.x)+(d3.y-d1.y)*(d3.y-d1.y));
	if ((a+b>c) && (b+c>a) && (c+a>b))
	{p=a+b+c;}
	else { cout<< " \n cac diem vua nhap ko tao thanh tam giac";}
	return p;
}
int main()
{
	DIEM diem1, diem2;
	double khoangcach;
	cout<<"\n diem A: ";
	nhaptoado(diem1);
	cout<<"\n diem B: ";
	nhaptoado(diem2);
	cout<<"\n diem C: ";
	nhaptoado(diem3);
	cout<<"\n toa do A la: ";
	xuattoado(diem1);
	cout<<"\n toa do B la: ";
	xuattoado(diem2);
	cout<<"\n toa do C la: ";
	xuattoado(diem3);
	cout<<"\n khoang cach giua 2 diem la: "<<khoangcach;
	cout<<"\n chu vi tam giac: "<<chuvi;
	return 0;
}
