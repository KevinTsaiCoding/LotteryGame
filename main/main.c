#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include"stars.h"
#include"biglotto.h"
#include"biglotto_player.h"
#include"biglotto_pc.h"
void display_flash_0(int x,int y,char *word);
void display_flash_1(int x,int y,char *word);/* generate animation*/
void display_flash_2(int x,int y,char *word);
void display_flash_3(int x,int y,char *word);
void display_flash_4(int x,int y,char *word);
int main()
{/* main page: login page, Choose page. */
	int *ptr=malloc(sizeof(unsigned int)*100);
	head:
	system("color 07");
	srand(time(NULL));
	system("Mode con cols=110 lines=15");
	SetConsoleTitle("Lottery Game");
	int i;
	/* L */
	for(i=0;i<10;i++){
		display_flash_0(1,i,"■");
		Sleep(40);
	}
	for(i=1;i<10;i++){
		display_flash_0(i,9,"■");
		Sleep(40);
	}
	/* O */	
	for(i=15;i<30;i++){
		display_flash_1(i,0,"■");
		Sleep(40);
	}
	for(i=1;i<10;i++){
		display_flash_1(30,i,"■");
		Sleep(40);
	}
	for(i=1;i<10;i++){
		display_flash_1(15,i,"■");
		Sleep(40);
	}
	for(i=1;i<8;i++){
		display_flash_1(i,30,"■");
		Sleep(40);
	}
	/* T */
	for(i=1;i<10;i++){
		display_flash_2(40,i,"■");
		Sleep(40);
	}
	for(i=35;i<45;i++){
		display_flash_2(i,0,"■");
		Sleep(40);
	}
	/* T */
	for(i=1;i<10;i++){
		display_flash_3(55,i,"■");
		Sleep(40);
	}
	for(i=49;i<62;i++){
		display_flash_3(i,0,"■");
		Sleep(40);
	}
	/* O */
	for(i=70;i<85;i++){
		display_flash_4(i,0,"■");
		Sleep(40);
	}
	for(i=0;i<10;i++){
		display_flash_4(84,i,"■");
		Sleep(40);
	}
	for(i=1;i<10;i++){
		display_flash_4(70,i,"■");
		Sleep(40);
	}
	for(i=71;i<85;i++){
		display_flash_4(i,9,"■");
		Sleep(40);
	}
	system("pause");
	system("cls");
	system("Mode con cols=40 lines=17");
	while(1){
		system("Mode con cols=40 lines=17");
		SetConsoleTitle("目錄");
		system("color f0");
		puts("請選擇遊玩模式\n");
		puts("1. 大樂透\n");
		puts("2. 三星彩\n");
		puts("3. 重新整理畫面\n");
		puts("4. exit\n");
		printf("> ");
		char op;
		op='0';
		scanf("%c",&op);
		fflush(stdin);
		switch(op){
			case '1':
			biglotto();
			break;
			case '2':
				system("color 16");
				SetConsoleTitle("3 Stars");
				stars();
				break;
			case '3':
				goto head;
				break;
			case '4':
				puts("退出中...");
				SetConsoleTitle("退出中...");
				sleep(2);
				goto end;
				break;
			default:
			SetConsoleTitle("Error 404");
			system("cls");
			system("color 02");
			printf("\t■      ■\n\t■      ■\n\t■      ■\n\t■■■■■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\n");
			sleep(1);
			system("cls");
			printf("\t■■■■■\n\t■      ■\n\t■      ■\n\t■      ■\n\t■      ■\n\t■      ■\n\t■■■■■\n\n\n");
			sleep(1);
			system("cls");
			printf("\t■      ■\n\t■      ■\n\t■      ■\n\t■■■■■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\n");
			sleep(1);
			system("cls");
			printf("按Enter重整畫面\n");
			break; 
		}
		system("pause");
		fflush(stdin);
		system("cls");
	}
	end:
	free(ptr);
	system("pause");
	return 0;
}
void display_flash_0(int x,int y,char *word)
{
	HANDLE hout= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordinate={x,y};
	SetConsoleCursorPosition(hout,coordinate);
	SetConsoleTextAttribute(hout,FOREGROUND_RED|FOREGROUND_BLUE);
	printf("%s",word);
}
void display_flash_1(int x,int y,char *word)
{
	HANDLE hout= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordinate={x,y};
	SetConsoleCursorPosition(hout,coordinate);
	SetConsoleTextAttribute(hout,FOREGROUND_BLUE);
	printf("%s",word);
}
void display_flash_2(int x,int y,char *word)
{
	HANDLE hout= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordinate={x,y};
	SetConsoleCursorPosition(hout,coordinate);
	SetConsoleTextAttribute(hout,FOREGROUND_GREEN);
	printf("%s",word);
}
void display_flash_3(int x,int y,char *word)
{
	HANDLE hout= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordinate={x,y};
	SetConsoleCursorPosition(hout,coordinate);
	SetConsoleTextAttribute(hout,FOREGROUND_RED|FOREGROUND_GREEN);
	printf("%s",word);
}
void display_flash_4(int x,int y,char *word)
{
	HANDLE hout= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordinate={x,y};
	SetConsoleCursorPosition(hout,coordinate);
	SetConsoleTextAttribute(hout,FOREGROUND_GREEN|FOREGROUND_BLUE);
	printf("%s",word);
}
