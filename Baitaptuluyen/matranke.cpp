#include<iostream>
#include<iomanip> //setw
#include<vector> //vector
using namespace std;

void Khoitao(vector<vector<int> >&arr, int &n)
{
	cout<<"Nhap n:";
	cin>>n;
	arr.resize(n);		
	for(int i=0; i<n;i++)
		arr[i].resize(n);
	
	for(int j=0; j<n;j++)
		for(int k=0;k<n;k++)
			arr[j][k]=0;
}

void xuat(vector<vector<int> >arr, int &n)
{
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<setw(5)<<arr[i][j];	
		cout<<endl;
	}
}
int kiemtra_ke(int so)
{
	while(so>1&&(so%2==0))
	{
		so=so/2;
	}
	if(so==1) return 1;
	return 0;
}

void kqua(vector<vector<int> >&arr, int&n)
{
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<n;j++)
			if(kiemtra_ke(i^j)==1)
			{
				arr[i][j]=1;
			}
	}
}
int main()
{
	int n;
	vector<vector<int> > arr;
	Khoitao(arr,n);
	//xuat(arr,n);
	cout<<endl;
	kqua(arr,n);
	xuat(arr,n);
	return 0;
}
