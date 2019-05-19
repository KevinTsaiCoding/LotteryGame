#include<stdio.h>
#include<time.h>
#include<windows.h>
#define N 4
void best(void);/* 正彩 */
void worse(void);/* 組彩 */
void worst(void);/* 對彩 */
char stars_num[N];/* 正確號碼 */
char player_num[N];	/* 玩家號碼 */
int i,j,a=0,b=0,choice,random;
void stars(void)
{
	system("cls");
	for(i=0;i<N-1;i++){
		stars_num[i]=rand()%10+48; // generate ASCII code 0~9
		for(j=0;j<i;j++){
			if(stars_num[i]==stars_num[j]){
				i--;
			}
		}
	}
	printf("\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\n");
	sleep(1);
	system("cls");
	printf("\t■■■■■\n\t■     \n\t■     \n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n");
	sleep(1);
	system("cls");
	printf("\t■■■■■■■\n\t      ■    \n\t      ■    \n\t      ■    \n\t      ■    \n\t      ■    \n\t      ■    \n");
	sleep(1);
	system("cls");
	printf("\t     ■\n\t   ■  ■\n\t  ■    ■\n\t ■      ■\n\t■        ■\n\t■■■■■■\n\t■        ■\n\t■        ■\n\t■        ■\n");
	sleep(1);
	system("cls");
	printf("\t■■■■■\n\t■       ■\n\t■       ■\n\t■■■■■\n\t■■■\n\t■  ■■\n\t■   ■■\n\t■      ■■\n\t■        ■■\n");
	sleep(1);
	system("cls");
	printf("\t■■■■■\n\t■     \n\t■     \n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n");
	sleep(1);
	system("cls");
	puts("歡迎游完三星彩, 請選擇您要玩的模式");
	puts("1. 正彩");
	puts("2. 組彩");
	puts("3. 對彩");
	printf("> ");
	int op;
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			best();
			break;
		case 2:
			worse();
			break;
		case 3:
			worst();
			break;
		default:
			puts("No Support");
			break;
	}
}
void best(void)
{
	SetConsoleTitle("S Stars- 正彩");
	fflush(stdin);
	puts("選個三位數: ");
	printf("1.電腦選號\n2.玩家選號\n> ");
	scanf("%d",&choice);
	if(choice==2){
		fflush(stdin);
		printf("玩家選擇號碼為\n> ");
		gets(player_num);
	}
	else if(choice==1){
		 printf("電腦選擇號碼為\n> ");
		for(random=0;random<N-1;random++){
			player_num[random]=rand()%10+48;
			printf("%c",player_num[random]);
		}	
	}
	puts("");
	int bet;
	printf("您下注數目(每注25元): ");
	scanf("%d",&bet);	
	int i,j;
	int a=0,b=0;
	for(i=0;i<N-1;i++){
		if(stars_num[i]==player_num[i])
			a++;
		else{
			for(j=0;j<N-1;j++)
				if(stars_num[i]==player_num[j])
					b++;
		}
	}
	SetConsoleTitle("S Stars- 正彩 ~ 開獎中...");
	system("cls");
	printf("開獎中...\n");
	sleep(2);
	system("cls");
	for(i=0;i<N-1;i++){
		if(stars_num[i]=='0')
			printf("\t■■■■■\n\t■      ■\n■      ■\n\t■      ■\n\t■      ■\n\t■      ■\n\t■■■■■\n\n\n");
		if(stars_num[i]=='1')
			printf("\t■\n\t■\n\t■\n\t■\n\t■\n\t■\n\t■\n\n");
		if(stars_num[i]=='2')
			printf("\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\t■\n\t■\n\t■■■■■\n\n");
		if(stars_num[i]=='3')
			printf("\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\n");	
		if(stars_num[i]=='4')
			printf("\t■      ■\n\t■      ■\n\t■      ■\n\t■■■■■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\n");
		if(stars_num[i]=='5')
			printf("\t■■■■■\n\t■\n\t■\n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\n");
		if(stars_num[i]=='6')
			printf("\t■■■■■\n\t■\n\t■\n\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\n");
		if(stars_num[i]=='7')
			printf("\t■■■■■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\n");
		if(stars_num[i]=='8')
			printf("\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\n");
		if(stars_num[i]=='9')
			printf("\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\n");
		sleep(1);
		system("cls");
	}
	SetConsoleTitle("Result");
	(a==3)?printf("恭喜獲得正彩, 您獲得%d元\n",bet*25*500):printf("您獲得0元\n",bet);	
}

void worse(void)
{
	SetConsoleTitle("S Stars- 組彩");
	puts("選個三位數: ");
	fflush(stdin);
	printf("1.電腦選號\n2.玩家選號\n> ");
	scanf("%d",&choice);
	if(choice==2){
		fflush(stdin);
		printf("玩家選擇號碼為\n> ");
		gets(player_num);
	}
	else if(choice==1){
		 printf("電腦選擇號碼為\n> ");
		for(random=0;random<N-1;random++){
			player_num[random]=rand()%10+48;
			printf("%c",player_num[random]);
		}	
	}
	puts("");
	int bet;
	printf("您下注數目(每注25元): ");
	scanf("%d",&bet);
	a=0,b=0;
	for(i=0;i<N-1;i++){
		if(stars_num[i]==player_num[i])
			a++;
		else{
			for(j=0;j<N-1;j++)
				if(stars_num[i]==player_num[j])
					b++;
		}
	}
	SetConsoleTitle("S Stars- 組彩 ~ 開獎中...");
	system("cls");
	printf("開獎中...\n");
	sleep(2);
	system("cls");
	for(i=0;i<N-1;i++){
		if(stars_num[i]=='0')
			printf("\t■■■■■\n\t■      ■\n■      ■\n\t■      ■\n\t■      ■\n\t■      ■\n\t■■■■■\n\n\n");
		if(stars_num[i]=='1')
			printf("\t■\n\t■\n\t■\n\t■\n\t■\n\t■\n\t■\n\n");
		if(stars_num[i]=='2')
			printf("\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\t■\n\t■\n\t■■■■■\n\n");
		if(stars_num[i]=='3')
			printf("\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\n");	
		if(stars_num[i]=='4')
			printf("\t■      ■\n\t■      ■\n\t■      ■\n\t■■■■■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\n");
		if(stars_num[i]=='5')
			printf("\t■■■■■\n\t■\n\t■\n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\n");
		if(stars_num[i]=='6')
			printf("\t■■■■■\n\t■\n\t■\n\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\n");
		if(stars_num[i]=='7')
			printf("\t■■■■■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\n");
		if(stars_num[i]=='8')
			printf("\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\n");
		if(stars_num[i]=='9')
			printf("\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\n");
		sleep(1);
		system("cls");
	}
	SetConsoleTitle("Result");
	(a==3||b==3)?printf("恭喜獲得組彩, 您獲得%d元\n",bet*25*80):printf("恭喜獲得正彩, 您獲得%d元\n",0);
}
void worst(void)
{
	SetConsoleTitle("S Stars- 對彩");
	puts("選個三位數: ");
	fflush(stdin);
	printf("1.電腦選號\n2.玩家選號\n> ");
	scanf("%d",&choice);
	if(choice==2){
		fflush(stdin);
		printf("玩家選擇號碼為\n> ");
		gets(player_num);
	}
	else if(choice==1){
		 printf("電腦選擇號碼為\n> ");
		for(random=0;random<N-1;random++){
			player_num[random]=rand()%10+48;
			printf("%c",player_num[random]);
		}	
	}
	puts("");
	int bet;
	printf("您下注數目(每注25元): ");
	scanf("%d",&bet);
	for(i=0;i<2;i++)
		if(stars_num[i]==player_num[i])
			a++;
	for(j=1;j<3;j++)
		if(stars_num[j]==player_num[j])
			b++;
	system("cls");
	SetConsoleTitle("S Stars- 對彩 ~ 開獎中...");
	printf("開獎中...\n");
	sleep(2);
	system("cls");
	for(i=0;i<N-1;i++){
		if(stars_num[i]=='0')
			printf("\t■■■■■\n\t■      ■\n■      ■\n\t■      ■\n\t■      ■\n\t■      ■\n\t■■■■■\n\n\n");
		if(stars_num[i]=='1')
			printf("\t■\n\t■\n\t■\n\t■\n\t■\n\t■\n\t■\n\n");
		if(stars_num[i]=='2')
			printf("\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\t■\n\t■\n\t■■■■■\n\n");
		if(stars_num[i]=='3')
			printf("\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\n");	
		if(stars_num[i]=='4')
			printf("\t■      ■\n\t■      ■\n\t■      ■\n\t■■■■■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\n");
		if(stars_num[i]=='5')
			printf("\t■■■■■\n\t■\n\t■\n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\n");
		if(stars_num[i]=='6')
			printf("\t■■■■■\n\t■\n\t■\n\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\n");
		if(stars_num[i]=='7')
			printf("\t■■■■■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\t        ■\n\n");
		if(stars_num[i]=='8')
			printf("\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\n");
		if(stars_num[i]=='9')
			printf("\t■■■■■\n\t■      ■\n\t■      ■\n\t■■■■■\n\t        ■\n\t        ■\n\t■■■■■\n\n");
		sleep(1);
		system("cls");
	}
	SetConsoleTitle("Result");
	(a==2||b==2)?printf("恭喜獲得對彩, 您獲得%d元\n",bet*25*30):printf("您獲得0元\n",bet);	
}
