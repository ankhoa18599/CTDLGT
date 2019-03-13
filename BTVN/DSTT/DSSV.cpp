#include<iostream>
#include<conio.h>
#define MAXLIST 100
#define TRUE 1
#define FALSE 0
using namespace std;

typedef struct list 
{
	int n=0; //danh sach rong
	int nodes [MAXLIST]; // mang 1 chieu
};

//Kiem tra danh sach co rong hay khong
int Empty(list sv)
{
	return (sv.n==0 ? TRUE : FALSE);
}
//Kiem tra danh sach co day hay khong
int Full(list sv)
{
	return (sv.n==MAXLIST ? TRUE : FALSE)
}
//Tao danh sach
int create_List(list &sv)
{
	int i;
	cout<<"\nNhap so luong sinh vien";
	cin>>sv.n;
	for (i=0; i<n; i++)
	{
		cout<<"SV["<<i+1<<"]";
		cin>>sv.nodes;
	}
}
//Chen nut co noi dung info vao vtri i
//i==0:Them vao dau danh sach
//i==sv.n+1

void Insert_info(list &sv, int i, int info)
{
	int j;
	if(i<0||i>sv.n+1)
		cout<<"Vi tri chen khong phu hop!";
	else 
		if(Full(sv))
			cout<<"Danh sach day";
		else
			{
				if(i==0) i=1;
				for(j=sv.n-1; j>=i-1;j--)
					sv.nodes[j+1]=sv.nodes[j];
				sv.nodes[i-1]=info;
				sv.n++;	
			}
}
//Tac vu delete : xoa nut tai vi tri i trong danh sach

void Delete_info(list &sv, int i)
{
	int j;
	int temp;
	if(i<=0||i>sv.n)
		cout<<"Vi tri xoa khong hop le";
	else
		if(Empty(sv))
			cout<<"Danh sach khong co phan tu nao";
		else
		{
			for(j=i; j<sv.n;j++) //
				sv[j-1] = sv.n[j];
			plist.n--;
		}
}

//xoa tat ca cac nut trong danh sach
void Clear(list &sv)
{
	sv.n=0;
}
//Duyet danh sach cac so nguyen
void Traverse(list sv)
{
	int i;
	if(sv.n==0)
	{
		cout<<"\nDanh sach khong co phan tu";
		return;
	}
	for(i=0; i<sv.n;i++)
		cout<<" "<<sv.nodes[i];
}

int main()
{


	return 0;
}

