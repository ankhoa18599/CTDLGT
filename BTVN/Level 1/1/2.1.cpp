#include<iostream>
#include<iomanip>// setw
using namespace std;

int X[40], D[40], B, n;
int ans[1000005][40], ansC=0;

//kiem tra vector nhi phan X co tong phan tu bang B hay khong 
int kiemtra(int vec[], int d[], int b, int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=vec[i]*d[i];
	}
	return sum==b;
}

//sinh vector, kiem tra xem co thoa man khong
int Try(int i)
{
	for(int j=0; j<=1;j++)
	{
		X[i]=j;
		if(i==n-1)
			{
				if(kiemtra(X,D,B,n))
				{
					for(int k=0;k<n;k++)
					{
						ans[ansC][k]=X[k];
					}
					ansC++;
				}
			}
		else Try(i+1);		
	}
}
//in kq
void xuat(int vec[][40], int end)
{
	cout<<"----------------------------------------------------"<<endl;
	cout<<setw(10)<<end<<endl;
	for(int i=0;i<end;i++)
	{	for(int j=0;j<n;j++)
			cout<<setw(5)<<vec[i][j];
		cout<<endl;
		}
}

int main()
{
	
	freopen("data2.in","r",stdin);	
	//freopen("ketqua2.out","w",stdout);	
	cin>>n>>B;
	for(int i=0; i<n;i++)
	{
		cin>>D[i];
	}
	Try(0);
	xuat(ans,ansC);
	fclose(stdin);
	//fclose(stdout);
	return 0;
}
