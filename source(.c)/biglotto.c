#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include"biglotto_player.h"
#include"biglotto_pc.h"
void biglotto(void)
{
	again:
	SetConsoleTitle("BigLotto");
	system("color 07");
	system("cls");
	printf("\t�j�ֳz  �C�`50��\n", 50);
	puts("");
	printf("1. �ۿ︹�X\n\n2. �q���︹\n",50);
	char op;
	printf("> ");
	scanf("%c",&op);
	fflush(stdin);
	switch(op)
	{
		case '1':
			biglotto_player();
			break;
		case '2':
			biglotto_pc();
			break;
		default:
			system("cls");
			SetConsoleTitle("Error 404");
			system("color 02");
			printf("\t��      ��\n\t��      ��\n\t��      ��\n\t����������\n\t        ��\n\t        ��\n\t        ��\n\t        ��\n\n");
			sleep(1);
			system("cls");
			printf("\t����������\n\t��      ��\n\t��      ��\n\t��      ��\n\t��      ��\n\t��      ��\n\t����������\n\n\n");
			sleep(1);
			system("cls");
			printf("\t��      ��\n\t��      ��\n\t��      ��\n\t����������\n\t        ��\n\t        ��\n\t        ��\n\t        ��\n\n");
			sleep(1);
			system("cls");
			goto again;
			break;
	}
}
