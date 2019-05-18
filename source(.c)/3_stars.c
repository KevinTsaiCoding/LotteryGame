#include<stdio.h>
#include<time.h>
#include<dos.h>
#define N 4


void best(void);/* 正彩 */
void worse(void);/* 組彩 */
void worst(void);/* 對彩 */

char stars_num[N];
char player_num[N];	

void stars(void)
{
	system("cls");
	
	int i,j;
	for(i=0;i<N-1;i++){
		stars_num[i]=rand()%10+48; // generate ASCII code 0~9
		for(j=0;j<i;j++){
			if(stars_num[i]==stars_num[j]){
				i--;
			}
		}
	}
	
	printf("%c%c%c%c\n",stars_num[0],stars_num[1],stars_num[2],stars_num[3]);
	
	puts("Welcome and Play 3 STARS, choice the option you want to play");
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
	fflush(stdin);
	puts("選個三位數: ");
	gets(player_num);
	
	int bet;
	printf("您下注數目(每注25元): ");
	scanf("%d",&bet);	
	
	int i,j;
	int a=0,b=0;
	for(i=0;i<N-1;i++){
		if(stars_num[i]==player_num[i]){
			a++;
		}
		else{
			for(j=0;j<N-1;j++){
				if(stars_num[i]==player_num[j]){
					b++;
				}
			}
		}
	}
	
	system("cls");
	printf("開獎中...\n");
	sleep(2);
	system("cls");
	
	for(i=0;i<N-1;i++){
		if(stars_num[i]=='0'){
			printf("\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='1'){
			printf("\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='2'){
			printf("\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='3'){
			printf("\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n\n");
			sleep(1);	
		}	
		if(stars_num[i]=='4'){
			printf("\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='5'){
			printf("\t■■■■■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='6'){
			printf("\t■■■■■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='7'){
			printf("\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='8'){
			printf("\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='9'){
			printf("\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		system("cls");
	}
	if(a==3){
		printf("恭喜獲得正彩, 您獲得%d元\n",bet*25*500);
	}
	else
		printf("您獲得0元\n",bet);	
}
void worse(void)
{
	fflush(stdin);
	puts("選個三位數: ");
	gets(player_num);
	
	int bet;
	printf("您下注數目(每注25元): ");
	scanf("%d",&bet);	
	
	int i,j;
	int a=0,b=0;
	for(i=0;i<N-1;i++){
		if(stars_num[i]==player_num[i]){
			a++;
		}
		else{
			for(j=0;j<N-1;j++){
				if(stars_num[i]==player_num[j]){
					b++;
				}
			}
		}
	}
	printf("請問要玩""3組彩""還是""6組彩""\n"); 
	puts("1. 3組彩");
	puts("2. 6組彩");
	printf("> ");
	int choose;
	scanf("%d",&choose);
	system("pause");
	
	system("cls");
	printf("開獎中...\n");
	sleep(2);
	system("cls");
	
	for(i=0;i<N-1;i++){
		if(stars_num[i]=='0'){
			printf("\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='1'){
			printf("\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='2'){
			printf("\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='3'){
			printf("\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n\n");
			sleep(1);	
		}	
		if(stars_num[i]=='4'){
			printf("\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='5'){
			printf("\t■■■■■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='6'){
			printf("\t■■■■■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='7'){
			printf("\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='8'){
			printf("\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='9'){
			printf("\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		system("cls");
	}
	/****************************'
	*******************************/ 
}
void worst(void)
{
	fflush(stdin);
	puts("選個三位數: ");
	gets(player_num);
	
	int bet;
	printf("您下注數目(每注25元): ");
	scanf("%d",&bet);	
	
	int i,j;
	int a=0,b=0;
	for(i=0;i<2;i++){
		if(stars_num[i]==player_num[i]){
			a++;
		}
	}
	for(j=1;j<3;j++){
		if(stars_num[j]==player_num[j]){
			b++;
		}
	}
	
	
	system("cls");
	printf("開獎中...\n");
	sleep(2);
	system("cls");
	
	for(i=0;i<N-1;i++){
		if(stars_num[i]=='0'){
			printf("\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='1'){
			printf("\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='2'){
			printf("\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='3'){
			printf("\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n\n");
			sleep(1);	
		}	
		if(stars_num[i]=='4'){
			printf("\t■      ■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='5'){
			printf("\t■■■■■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='6'){
			printf("\t■■■■■\n"
				   "\t■\n"
				   "\t■\n"
				   "\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='7'){
			printf("\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t        ■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='8'){
			printf("\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		if(stars_num[i]=='9'){
			printf("\t■■■■■\n"
				   "\t■      ■\n"
				   "\t■      ■\n"
				   "\t■■■■■\n"
				   "\t        ■\n"
				   "\t        ■\n"
				   "\t■■■■■\n\n");
			sleep(1);
		}
		system("cls");
	}
	if(a==2||b==2){
		printf("恭喜獲得正彩, 您獲得%d元\n",bet*25*30);
	}
	else
		printf("您獲得0元\n",bet);	
		
}
	
