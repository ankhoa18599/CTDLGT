#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
using namespace std;

 
void gotoxy(int x, int y)
{
  	static HANDLE h = NULL;  
  	if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
 	COORD c = { x, y };  
  	SetConsoleCursorPosition(h,c);
}

int main()
{
	#include <stdio.h>
#include <conio.h>
main()
{
   while (kbhit())
   
      printf("You haven't pressed a key.\n");

   return 0;
}
}
