#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include"stars.h"


void display_flash(int x,int y,char *word);/* generate animation*/
int main()
{/* main page: login page, Choose page. */
	head:
	system("color 07");
	srand(time(NULL));
	system("Mode con cols=110 lines=15");
	SetConsoleTitle("Lottery Game");
	int i;
	/* L */
	for(i=0;i<10;i++){
		display_flash(1,i,"■");
		Sleep(20);
	}
	for(i=1;i<10;i++){
		display_flash(i,9,"■");
		Sleep(20);
	}
	/* O */	
	for(i=15;i<30;i++){
		display_flash(i,0,"■");
		Sleep(20);
	}
	for(i=1;i<10;i++){
		display_flash(30,i,"■");
		Sleep(20);
	}
	for(i=1;i<10;i++){
		display_flash(15,i,"■");
		Sleep(20);
	}
	for(i=1;i<8;i++){
		display_flash(i,30,"■");
		Sleep(20);
	}
	/* T */
	for(i=1;i<10;i++){
		display_flash(40,i,"■");
		Sleep(20);
	}
	for(i=35;i<45;i++){
		display_flash(i,0,"■");
		Sleep(20);
	}
	/* T */
	for(i=1;i<10;i++){
		display_flash(55,i,"■");
		Sleep(20);
	}
	for(i=49;i<62;i++){
		display_flash(i,0,"■");
		Sleep(20);
	}
	/* O */
	for(i=70;i<85;i++){
		display_flash(i,0,"■");
		Sleep(20);
	}
	for(i=0;i<10;i++){
		display_flash(84,i,"■");
		Sleep(20);
	}
	for(i=1;i<10;i++){
		display_flash(70,i,"■");
		Sleep(20);
	}
	for(i=71;i<85;i++){
		display_flash(i,9,"■");
		Sleep(20);
	}
	system("pause");
	system("cls");
	system("Mode con cols=40 lines=17");
	while(1){
		system("color f0");
		puts("請選擇遊玩模式\n");
		puts("1. 大樂透\n");
		puts("2. 三星彩\n");
		puts("3. 重新整理畫面\n");
		puts("4. exit\n");
		printf("> ");
		int op;
		op=0;
		scanf("%d",&op);
		switch(op){
			/* case 1:
				biglotto; */
			case 2:
				system("color 16");
				stars();
				break;
			case 3:
				goto head;
				break;
			case 4:
				system("pause");
				return 0;
				break;
			default:
			puts("No Support");
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
	SetConsoleTextAttribute(hout,FOREGROUND_RED|FOREGROUND_BLUE);
	printf("%s",word);
}
