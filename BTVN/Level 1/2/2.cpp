#include<iostream>
using namespace std;

int n;
long long gt[100];

void Giaithua()
{
	gt[0]=1;
	for(int i=1; i<n;i++)
		gt[i]=i*gt[i-1];
}

//debai:
	/*float Tinh_E (int n)
	{
	float E=0;
	long gt;
	for (int i=1; i<n; i++)
	{
	gt=1;
	for (int j=1; j<=i; ) gt= gt *j; //for (int j=1; j<=n; ) gt= gt *j;
	E= E + 1.0*(2*i-1)/gt; //E= E + (2*i-1)/gt;
	}
	}*/
	
float Tinh_E(int n)
{
	float E=0;
	for(int i=1; i<n;i++)
	{
		E= E + 1.0*(2*i-1)/gt[i];
	}
	return E;
}

int main()
{
	cin>>n;
	Giaithua();
	cout<< Tinh_E(n);
	return 0;
}
