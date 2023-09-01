#include<iostream>
#include<stdio.h>
using namespace std;
void nhapn(int &n)
{
	do
	{ cout<<" nhap so phtu : ";
	cin>>n;
	}
	while (n<=1 || n>=30);
}
void nhapmang( int a[], int &n)
{
	int i;
	for(i=0; i<n;i++)
	{
		cout<<"a["<<i<<"]: ";
		cin>> a[i];
	}
}
void xuatmang( int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<a[i];
	}
}
void timchan( int a[], int n)
{
	for(int i=0; i<=n;i++)
	{
		if(a[i] % 2 == 0)
		{
			cout<<"\n cac phtu chan: ";
			cin>> a[i];
		}
	}
}
void inuoc( int a[],int n)
{
	int x;
	cout<<"\n nhap x: ";
	cin>>x;
	cout<<"tat ca cac phan tu duong uoc cua"<<x<<"la: ";
	for(int i=0;i<=n;i++)
	{
		if( x % a[i]==0)
		{
			cout<<a[i]<<" ";
		}
	}
}
int main()
{
	int n;
	int a[29];
	nhapn(n);
	nhapmang(a,n);
	xuatmang(a,n);
	timchan(a,n);
	cout<<"\n cac phtu chan : ";
	inuoc(a,n);
	cout<<"\n cac phtu duong uoc : ";
	return 0;
}
