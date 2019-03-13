#include<iostream>
#include <conio.h>
#include <stdlib.h>
//#define MAX 100
using namespace std;

typedef struct SinhVien
{
	char maso[];
	char ho[];
	char ten[];
};
void nhap(SinhVien &a)
{
	cout<<"Nhap ma so cua sinh vien:";
	fflush(stdin);
	gets(a.maso);
	cout<<"Nhap ho cua sinh vien:";
	fflush(stdin);
	gets(a.ho);
	cout<<"Nhap ten cua sinh vien:";
	fflush(stdin);
	gets(a.ten);
	
}
void nhapN(SinhVien a[], int n)
{
	cout<<"\n__________________________________________________________________________";
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap sinh vien thu "<< i+1 <<" :"<<endl;
		nhap(a[i]);
		fflush(stdin);
	}
//	cout<<"\n__________________________________________________________________________";
}

void xem(SinhVien &a)
{
//	cout<<"\n__________________________________________________________________________";
	cout<<"\nMa so sinh vien: "<<a.maso;
	cout<<"\nHo sinh vien: "<<a.ho;
	cout<<"\nTen sinh vien: "<<a.ten;
	cout<<endl;
}
void xemN(SinhVien a[], int n )
{
	cout<<"\n__________________________________________________________________________";
	for(int i=0; i<n; i++)
	{
		cout<<"\nThong tin sinh vien thu "<<i+1<<" :";
		xem(a[i]);
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong sinh vien: "; cin>>n;
	SinhVien *a=new SinhVien[n];
	nhapN(a,n);
	xemN(a,n);
	return 0;
}
