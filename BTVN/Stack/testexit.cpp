#include<iostream>
using namespace std;

int ex(int a, int b)
{
	exit(a*b);
}

int re(int a, int b)
{
	return a+b;
}

int main()
{
	int a=5,b=6;
	//cin>>a>>b;
	//cout<< re(a,b)<<endl;
	cout<< ex(a,b);
	cout<< re(a,b)<<endl;
	return 0;
}
