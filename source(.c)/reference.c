#include<stdio.h>
void reference(void)
{
	system("Mode con cols=110 lines=30");
	puts("---------------------------------------------"); 
	puts("|      1. 玩家選號內容只能 1-49號           |");
	puts("|      2. 玩家選號內容不能 小於1或大於49號  |");
	puts("|      3. 玩家選號內容不能 為Alpha          |");
	puts("---------------------------------------------");
	system("pause");
	system("cls");
}
