#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include"stars.h"


void display_flash(int x,int y,char *word);/* generate animation*/
int main()
{/* main page: login page, Choose page. */
	system("Mode con cols=180 lines=20");
	SetConsoleTitle("Lottery Game");
	system("color 07");
	system("pause");
	system("cls");
	system("Mode con cols=70 lines=20");
	while(1)
	{
		system("color 16");
		puts("1. 大樂透");
		puts("2. 三星彩");
		puts("3. exit");
		printf("> ");
		int op;
		op=0;
		scanf("%d",&op);
		switch(op)
		{
			/* case 1:
				biglotto; */
			case 2:
				stars();
				break;
			case 3:
				system("pause");
				return 0;
				break;
		}
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}
void display_flash(int x,int y,char *word)
{
	HANDLE hout= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordinate={x,y};
	SetConsoleCursorPosition(hout,coordinate);
	SetConsoleTextAttribute(hout,FOREGROUND_RED);
	printf("%s",word);
}
