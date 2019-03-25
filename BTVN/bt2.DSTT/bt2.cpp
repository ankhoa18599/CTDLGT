#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
//#define MAX 100
using namespace std;

typedef struct SinhVien
{
	char maso[15];
	char ho[10];
	char ten[10];
};
int n;
SinhVien *a=new SinhVien[n];
void nhap(SinhVien &a)
{
	cout<<"Nhap ma so cua sinh vien:";
	fflush(stdin);
	cin.getline(a.maso,15);
	cout<<"Nhap ho cua sinh vien:";
	fflush(stdin);
	cin.getline(a.ho,10);
	cout<<"Nhap ten cua sinh vien:";
	fflush(stdin);
	cin.getline(a.ten,10);
	
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

void Swap(SinhVien &c, SinhVien &d)
{
	SinhVien temp;
	temp=c;
	c=d;
	d=temp;
	
}

void Sort_name(SinhVien a[], int n)
{
	int t,h;
	for(int i=0; i<n-1;i++)
		for(int j=i+1; j<n;j++)
			{
				t=strcmp(a[i].ten,a[j].ten);
					if(t>0)
						Swap(a[i],a[j]);
					else if(t==0)
					{
						h=strcmp(a[i].ho,a[j].ho);
						if(h>0)
							Swap(a[i],a[j]);		
					}
			}
}

int main()
{
	cout<<"Nhap so luong sinh vien: "; cin>>n;
	nhapN(a,n);
	xemN(a,n);
	Sort_name(a,n);
	cout<<"\nSau khi sap xep:";
	xemN(a,n);
	return 0;
}
