#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;

void input(vector<int>&arr, int &n)
{
	srand(time(0));
	cout<<"Nhap vao so luong phan tu:";
	cin>>n;
	arr.resize(n);
	for(int i=0; i<arr.size();i++)
	{
		arr[i]=rand()%100;
	}
	
}
void output(vector<int>&arr)
{
	for(int i=0; i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int Min(vector<int> &arr)
{
	int min=arr[0];
	for (int i=0;i<arr.size();i++)
	{
		if(arr[i]<min) min=arr[i];
	}
	return min;
}
void arrMin(vector<int> &arr)
{
	int min=Min(arr);
	cout<<"\nBAI 1:";
	cout<<"\nGia tri nho nhat trong day tren la: "<<min;
	vector<int> arr2;
	//arr2.resize(n);
	for(int i=0; i<arr.size();i++)
	{
		if(arr[i]==min)
		{
			arr2.push_back(i);
		}
	}
	cout<<"\nBAI 2:";
	cout<<"\nGia tri nho nhat "<<min<<" xuat hien o cac vi tri: ";
	for(int j=0; j<arr2.size();j++)
	{
		cout<<arr2[j]+1<<" ";
	}
}

void Frequency(vector<int> &arr)
{
	cout<<"\nBAI 3:";
	for(int i=0; i<arr.size(); i++)
	{
		int count=0;
		for(int j=0; j<arr.size();j++)
		{
			if(arr[i]==arr[j])
			{
				if(i<=j) count++;
				else break;
			}
		}
		if(count!=0)
		cout<<"\nGia tri "<<arr[i]<<" xuat hien: "<<count<<" lan.";
	}
}

void Daoso(int &so)
{
	cout<<"\nBAI 4:";
	cout<<"\nNhap vao so can dao:";
	cin>>so;
	cout<<"\nKet qua: ";
	while(so>0)
	{
		cout<<so%10;
		so=so/10;
	}
}

void timx(vector<int> &arr, int &x)
{
	cout<<"\nBAI 5: ";
	cout<<"\nNhap x: "; cin>>x;
	vector<int> arr2;
	for(int i=0; i<arr.size();i++)
	{
			arr2.push_back(abs(arr[i]-x));
	}
	int min=Min(arr2);
	int vitriMin;
	for(int j=0;j<arr2.size();j++)
	{
		if(arr2[j]==min)
		{
			vitriMin=j;
		}
	}
	cout<<"\nGia tri gan x nhat la: "<<arr[vitriMin];
}

int main()
{
	vector<int> arr;
	int n,x,so;
	input(arr,n);
	output(arr);
	arrMin(arr);//bai 1 2
	Frequency(arr); // bai 3
	Daoso(so); //bai4
	timx(arr,x); //bai 5
	
	return 0;
}
