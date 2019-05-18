#include<stdio.h>
#include<time.h>
#include<dos.h>
#define N 4


void best(void);/* ���m */
void worse(void);/* �ձm */
void worst(void);/* ��m */

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
	puts("1. ���m");
	puts("2. �ձm");
	puts("3. ��m");
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
	puts("��ӤT���: ");
	gets(player_num);
	
	int bet;
	printf("�z�U�`�ƥ�(�C�`25��): ");
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
	printf("�}����...\n");
	sleep(2);
	system("cls");
	
	for(i=0;i<N-1;i++){
		if(stars_num[i]=='0'){
			printf("\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='1'){
			printf("\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='2'){
			printf("\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n"
				   "\t��\n"
				   "\t��\n"
				   "\t����������\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='3'){
			printf("\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n\n");
			sleep(1);	
		}	
		if(stars_num[i]=='4'){
			printf("\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n\n");
			sleep(1);
		}
		if(stars_num[i]=='5'){
			printf("\t����������\n"
				   "\t��\n"
				   "\t��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n\n");
			sleep(1);
		}
		if(stars_num[i]=='6'){
			printf("\t����������\n"
				   "\t��\n"
				   "\t��\n"
				   "\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n\n");
			sleep(1);
		}
		if(stars_num[i]=='7'){
			printf("\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n\n");
			sleep(1);
		}
		if(stars_num[i]=='8'){
			printf("\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n\n");
			sleep(1);
		}
		if(stars_num[i]=='9'){
			printf("\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n\n");
			sleep(1);
		}
		system("cls");
	}
	if(a==3){
		printf("������o���m, �z��o%d��\n",bet*25*500);
	}
	else
		printf("�z��o0��\n",bet);	
}
void worse(void)
{
	fflush(stdin);
	puts("��ӤT���: ");
	gets(player_num);
	
	int bet;
	printf("�z�U�`�ƥ�(�C�`25��): ");
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
	printf("�аݭn��""3�ձm""�٬O""6�ձm""\n"); 
	puts("1. 3�ձm");
	puts("2. 6�ձm");
	printf("> ");
	int choose;
	scanf("%d",&choose);
	system("pause");
	
	system("cls");
	printf("�}����...\n");
	sleep(2);
	system("cls");
	
	for(i=0;i<N-1;i++){
		if(stars_num[i]=='0'){
			printf("\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='1'){
			printf("\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='2'){
			printf("\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n"
				   "\t��\n"
				   "\t��\n"
				   "\t����������\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='3'){
			printf("\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n\n");
			sleep(1);	
		}	
		if(stars_num[i]=='4'){
			printf("\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n\n");
			sleep(1);
		}
		if(stars_num[i]=='5'){
			printf("\t����������\n"
				   "\t��\n"
				   "\t��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n\n");
			sleep(1);
		}
		if(stars_num[i]=='6'){
			printf("\t����������\n"
				   "\t��\n"
				   "\t��\n"
				   "\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n\n");
			sleep(1);
		}
		if(stars_num[i]=='7'){
			printf("\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n\n");
			sleep(1);
		}
		if(stars_num[i]=='8'){
			printf("\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n\n");
			sleep(1);
		}
		if(stars_num[i]=='9'){
			printf("\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n\n");
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
	puts("��ӤT���: ");
	gets(player_num);
	
	int bet;
	printf("�z�U�`�ƥ�(�C�`25��): ");
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
	printf("�}����...\n");
	sleep(2);
	system("cls");
	
	for(i=0;i<N-1;i++){
		if(stars_num[i]=='0'){
			printf("\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='1'){
			printf("\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n"
				   "\t��\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='2'){
			printf("\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n"
				   "\t��\n"
				   "\t��\n"
				   "\t����������\n\n");
			sleep(1);
		}	
		if(stars_num[i]=='3'){
			printf("\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n\n");
			sleep(1);	
		}	
		if(stars_num[i]=='4'){
			printf("\t��      ��\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n\n");
			sleep(1);
		}
		if(stars_num[i]=='5'){
			printf("\t����������\n"
				   "\t��\n"
				   "\t��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n\n");
			sleep(1);
		}
		if(stars_num[i]=='6'){
			printf("\t����������\n"
				   "\t��\n"
				   "\t��\n"
				   "\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n\n");
			sleep(1);
		}
		if(stars_num[i]=='7'){
			printf("\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t        ��\n\n");
			sleep(1);
		}
		if(stars_num[i]=='8'){
			printf("\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n\n");
			sleep(1);
		}
		if(stars_num[i]=='9'){
			printf("\t����������\n"
				   "\t��      ��\n"
				   "\t��      ��\n"
				   "\t����������\n"
				   "\t        ��\n"
				   "\t        ��\n"
				   "\t����������\n\n");
			sleep(1);
		}
		system("cls");
	}
	if(a==2||b==2){
		printf("������o���m, �z��o%d��\n",bet*25*30);
	}
	else
		printf("�z��o0��\n",bet);	
		
}
	
