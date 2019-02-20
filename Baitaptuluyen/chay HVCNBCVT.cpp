#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <stdlib.h>
#include <string.h>
using namespace std;

#define width 80
#define height 25

void gotoxy(int x, int y)
{
  	static HANDLE h = NULL;  
  	if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
 	COORD c = { x, y };  
  	SetConsoleCursorPosition(h,c);
}

enum Trangthai{UP,DOWN,RIGHT,LEFT};

struct MoveText
{
	char s[100];
	int x,y;
	Trangthai tt;
};

int main()
{
	int k=200;
	MoveText a;
	strcpy(a.s,"Hoc vien Cong nghe Buu chinh Vien thong");
	int sl=strlen(a.s);
	a.x=(width-sl)/2;
	a.y=height/2;
    while(1)
    {
    	system("cls");
    	gotoxy(a.x,a.y);
    	cout<<a.s;
    	
    	if(kbhit())
    	{
    		char key=_getch();
    		if(key==75)
    			a.tt=LEFT;
    		else if(key==77)
    			a.tt=RIGHT;
    		/*else if(key==72)
    			a.tt=UP;
    		else if(key=80)
    			a.tt=DOWN;*/
    		if(key==72)
				k-=50;
			else if(key==80)
				k+=50;
		}
		if(a.tt==LEFT)
			a.x--;
		else if(a.tt==RIGHT)
			a.x++;
		Sleep(k);
	}
	return 0;
}
