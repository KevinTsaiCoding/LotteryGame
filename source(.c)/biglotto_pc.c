#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include"stars.h"
#include"biglotto.h"
#include"biglotto_pc.h"
void biglotto_pc()
{
	system("color 06");
	int x,r,t,v,n;
	int bet;
	int i,j,temp;
	int num[7];
	int random[6];
	srand(time(NULL));
	system("Mode con cols=110 lines=110");
	SetConsoleTitle("BigLotto- PC");
	printf("�w��C���j�ֳz�q���︹�g\n\n",50);
	printf("�аݭn�R�X�` �C�`50��\n");
	printf("> ");
	scanf("%d",&bet);
	printf("\n");
	for(i=0;i<7;i++){//�����X 
		do{
			num[i]=rand()%49+1;
			for(j=0;j<i;j++){
				if(num[i]==num[j]){
					num[i]=0;
				}
			}
		}while(num[i]==0);
	}
	for(i=0;i<6;i++){//�ƧǤ����X 
		for(j=0;j<6;j++){
			if(num[i]<num[j]){
				temp=num[j];
				num[j]=num[i];
				num[i]=temp;
				}
			}
	}
	printf("�������X :");
	for(i=0;i<7;i++){
		if(i==6){
			printf(" �S�O�� :");
		}
		printf("%3d ",num[i]);
	}//�����X 
	puts("\n");
	for(x=0;x<bet;x++){//�q���X 
		for(i=0;i<6;i++){//�q���X 
			do{
				random[i]=rand()%49+1;
				for(j=0;j<i;j++){
					if(random[i]==random[j]){
							random[i]=0;
					}
				}
			}while(random[i]==0);
		}
		for(i=0;i<6;i++){//�Ƨǹq���X 
			for(j=0;j<6;j++){
				if(random[i]<random[j]){
					temp=random[j];
					random[j]=random[i];
					random[i]=temp;
				}
			}
		}
		printf("�z�����X :");
		for(i=0;i<6;i++){
			printf("%3d",random[i]);
		}
		printf("\n");
		v=0;
		n=0;
		for(r=0;r<6;r++){//��� 
			for(t=0;t<6;t++){
				if(num[r]==random[t]){
					v++;
				}
			}
		}
		for(r=0;r<6;r++){//��� 
			if(num[r]==random[7]){
				n++;
			}
		}
		if(v==3&&n==0)
			printf("���߱z���F�����I\nNTD $400\n\n");
		else if(v==2&&n==1)
			printf("���߱z���F�m���I\nNTD $400\n\n");
		else if(v==4&&n==0)
			printf("���߱z���F����I\nNTD $2000\n\n");
		else if(v==3&n==1)
			printf("���߱z���F�����I\nNTD $1000\n\n");
		else if(v==5&n==0){
			printf("���߱z���F�Ѽ��I\n");
			printf("NTD $%.0f\n\n",bet*50*0.07);
		}
			
		else if(v==4&&n==1){
			printf("���߱z���F�v���I\n");
			printf("NTD $%.0f\n\n",bet*50*0.045);
		}
			
		else if(v==6&&n==0){
			printf("���߱z���F�Y���I\n");
			printf("NTD $%.0f\n\n",bet*50*0.82);
		}
			
		else if(v==5&&n==1){
			printf("���߱z���F�L���I\nNT$\n\n");
			printf("NTD $%.0f\n\n",bet*50*0.065);
		}
				
		else
			printf("���n�N�� �z�S�����I\n\n");
		puts("");
	}
}
