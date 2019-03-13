#include<iostream>
#define MAX 100
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
	cout<<"__________________________________________________________________________";
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap sinh vien thu "<< i+1 <<" :"<<endl;
		nhap(a[i]);
	}
	cout<<"__________________________________________________________________________";
}

void xem(SinhVien &a)
{
	cout<<"__________________________________________________________________________";
	cout<<"\nMa so sinh vien: "<<a.maso;
	cout<<"\nHo sinh vien: "<<a.ho;
	cout<<"\nTen sinh vien: "<<a.ten;
	cout<<endl;
}
void xemN(SinhVien a[], int n )
{
	cout<<"__________________________________________________________________________";
	for(int i=0; i<n; i++)
	{
		cout<<"Thong tin sinh vien thu "<<i+1<<" :";
		xem(a[i]);
	}
	cout<<"__________________________________________________________________________";
}
int main()
{
	int n;
	cout<<"Nhap so luong sinh vien: "; cin>>n;
	SinhVien a[MAX];
	nhapN(a,n);
	xemN(a,n);
	return 0;
}
