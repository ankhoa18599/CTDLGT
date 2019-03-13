#include<iostream>
#include<string.h>
using namespace std;
int top;
void check( char str[ ], char stack[ ])
{
	for(int i=0; i<strlen(str);i++)
	{
		if(str[i]=='(')
		{
			top=top+1;
			stack[top]='(';
		}
		if(str[i]==')')
		{
			if (top==-1)
			{
				top=top-1;
				break;
			}
			else top=top-1;
		}
	}
	if(top==-1) cout<<"\nString is balanced!";
	else cout<<"\nString is unbalanced!";
}
int main()
{
	char str[]="(())()"; //balanced string
	char str2[]="((()"; //unbalanced string
	char stack[15];
	top=-1;
	check(str,stack);
	top=-1;
	check(str2,stack);
	return 0;
}
