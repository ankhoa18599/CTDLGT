#include<stdio.h>
#include <conio.h>

int main()
{
	int a[3];
	int i; i=1;
	while(i<=3)
	{
		printf("Nhap vao gia tri thu %d:", i);
		scanf("%d", &a[i]);
		i++;
	}
	i=1;
	while(i<=3)
	{
		printf("gia tri thu %d la", i);
		printf("%d \n", a[i]);
		i++;
	}
	_getch();
	return 0;
}
