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
	printf("歡迎遊玩大樂透電腦選號篇\n\n",50);
	printf("請問要買幾注 每注50元\n");
	printf("> ");
	scanf("%d",&bet);
	printf("\n");
	for(i=0;i<7;i++){//中獎碼 
		do{
			num[i]=rand()%49+1;
			for(j=0;j<i;j++){
				if(num[i]==num[j]){
					num[i]=0;
				}
			}
		}while(num[i]==0);
	}
	for(i=0;i<6;i++){//排序中獎碼 
		for(j=0;j<6;j++){
			if(num[i]<num[j]){
				temp=num[j];
				num[j]=num[i];
				num[i]=temp;
				}
			}
	}
	printf("中獎號碼 :");
	for(i=0;i<7;i++){
		if(i==6){
			printf(" 特別號 :");
		}
		printf("%3d ",num[i]);
	}//中獎碼 
	puts("\n");
	for(x=0;x<bet;x++){//電腦碼 
		for(i=0;i<6;i++){//電腦碼 
			do{
				random[i]=rand()%49+1;
				for(j=0;j<i;j++){
					if(random[i]==random[j]){
							random[i]=0;
					}
				}
			}while(random[i]==0);
		}
		for(i=0;i<6;i++){//排序電腦碼 
			for(j=0;j<6;j++){
				if(random[i]<random[j]){
					temp=random[j];
					random[j]=random[i];
					random[i]=temp;
				}
			}
		}
		printf("您的號碼 :");
		for(i=0;i<6;i++){
			printf("%3d",random[i]);
		}
		printf("\n");
		v=0;
		n=0;
		for(r=0;r<6;r++){//比對 
			for(t=0;t<6;t++){
				if(num[r]==random[t]){
					v++;
				}
			}
		}
		for(r=0;r<6;r++){//比對 
			if(num[r]==random[7]){
				n++;
			}
		}
		if(v==3&&n==0)
			printf("恭喜您中了普獎！\nNTD $400\n\n");
		else if(v==2&&n==1)
			printf("恭喜您中了柒獎！\nNTD $400\n\n");
		else if(v==4&&n==0)
			printf("恭喜您中了伍獎！\nNTD $2000\n\n");
		else if(v==3&n==1)
			printf("恭喜您中了陸獎！\nNTD $1000\n\n");
		else if(v==5&n==0){
			printf("恭喜您中了參獎！\n");
			printf("NTD $%.0f\n\n",bet*50*0.07);
		}
			
		else if(v==4&&n==1){
			printf("恭喜您中了肆獎！\n");
			printf("NTD $%.0f\n\n",bet*50*0.045);
		}
			
		else if(v==6&&n==0){
			printf("恭喜您中了頭獎！\n");
			printf("NTD $%.0f\n\n",bet*50*0.82);
		}
			
		else if(v==5&&n==1){
			printf("恭喜您中了貳獎！\nNT$\n\n");
			printf("NTD $%.0f\n\n",bet*50*0.065);
		}
				
		else
			printf("不好意思 您沒中獎！\n\n");
		puts("");
	}
}
