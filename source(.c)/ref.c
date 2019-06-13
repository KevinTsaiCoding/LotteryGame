#include<stdio.h>
void ref()
{
	system("Mode con cols=110 lines=30");
	puts("---------------------------------------------"); 
	puts("|      1. 玩家選號內容只能 000-999號        |");
	puts("|      2. 玩家選號內容不能 小於0或大於999號 |");
	puts("|      3. 玩家選號內容不能 為 Alpha         |");
	puts("---------------------------------------------");
	system("pause");
	system("cls");
}
