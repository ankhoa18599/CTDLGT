#include <iostream>
#include <conio.h>
using namespace std;

int top=-1;
bool isFull(int capacity)
{
	if(top>=capacity-1) return true;
	else return false;
}

bool isEmpty()
{
	if(top==-1) return true;
	else return false;
}
void Push (int stack[], int value, int capacity)
{
	if(isFull(capacity)==true) 
		cout<<"\nThe Fucking Full. Push your pussy";
	else{
		++top;
		stack[top]=value;
	}
}
void Pop()
{
	if(isEmpty()==true)
		cout<<"\nThe Fucking empty. Pop your penis";
	else{
		--top;
	}
}

int Top(int stack[])
{
	return stack[top];
}

int Size()
{
	return top+1;
}

int main()
{
	int capacity=4;
	int top=-1;
	int stack[capacity];
	//push element 18 in the stack
	Push(stack,5,capacity);
	cout<<"\nCurrent size of stack is: "<<Size();
	Push(stack,5,capacity);
	Push(stack,1999,capacity);
	Push(stack,2019,capacity);
	cout<<"\nCurrent size of stack is: "<<Size();
	//As the stack is full, futher pushing will show an overflow condition
	Push(stack,10,capacity);
	cout<<"\nThe current top element in stack is:"<<Top(stack);
	for(int i = 0 ; i < 4;i++)
        Pop();
    cout<<"\nCurrent size of stack is: "<<Size();
	Pop();
	
	return 0;
}
