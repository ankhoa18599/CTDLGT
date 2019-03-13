#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <stdlib.h>
#include <string.h>
using namespace std;

#define W 80
#define H 25

void gotoXY (int x, int y)
{
	static HANDLE h = NULL;  
  	if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  	COORD c = { x, y };  
  	SetConsoleCursorPosition(h,c);
}
enum TrangThai{UP,DOWN,LEFT,RIGHT};

struct chaychu
{
	char s[100];
	int x,y; //y la tung do, x la hoanh do
	TrangThai tt;
};

int main()
{
	chaychu A;
	strcpy(A.s,"Hoc vien Cong Nghe Buu Chinh Vien Thong");
	int dai=strlen(A.s);
	A.x=(W-dai)/2;
	A.y=H/2;
	A.tt=LEFT;
	while(1)
	{
		system("cls");
		gotoXY(A.x,A.y);
		cout<<A.s;	
		//xu ly cham bien
		/*if(A.y>=H-1)
		A.tt=UP;
		else  if(A.y<=0)
		A.tt=DOWN;
		else if(A.x>=W-dai)
		A.tt=LEFT;
		else if(A.x<=0)
		A.x=RIGHT;*/
		//dieu khien chu chay
		if(kbhit()) //phat hien co phim nhan vao
		{
			char key=_getch();
			if(key==75)
			A.tt=LEFT;
			else if(key==77)
			A.tt=RIGHT;
			if(key==72)
			A.tt=UP;
			else if(key==80)
			A.tt=DOWN;
		}
		if(A.tt==DOWN)
			A.y++;
		else if(A.tt==UP)
			A.y--;
		else if(A.tt==LEFT)
			A.x--;
		else if(A.tt==RIGHT)
			A.x++;
		
	Sleep(50);
	}
	return 0;
}
