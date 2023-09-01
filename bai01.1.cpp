#include <iostream>
using namespace std;
int gthua (int n) 
{
	if (n==0 || n==1) {
		return 1;
	} else {
		return n*gthua(n-1);
	}
}
int main()
{
	int a,b; 
	float kq;
	cout<<"nhap so nguyen a:"; cin>>a;
	cout<<"nhap so nguyen b:"; cin>>b;
	kq= float (gthua (a) + gthua (b) )/gthua (a+b);
	cout<<"\n ket qua la:"<<kq;
}
