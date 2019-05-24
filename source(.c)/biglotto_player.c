#include<stdlib.h>
#include<stdio.h>
#include<windows.h> 
#include<time.h>
#include"stars.h"
#include"biglotto.h"
void SlowPrint(char* string,int sleeptime);
void biglotto_player(){
	SetConsoleTitle("BigLotto- Player");
	system("Mode con cols=60 lines=60");
	system("color f1");
	int i, j, t, temp;
	int num[7];// 6個一般號碼和一個特別號
	srand(time(NULL));
	int Optional_num[5][6];//使用者輸入 自選號 
	int same[5];//相同的 中獎數字 次數 
	int spe_same[5];//中特別號
	int money=100000;//獎池
	int bets;//投注次數 
	
	 
	
	SlowPrint("輸 入 投 注 次 數 ( 最 多 五 次 ) : ", 50);	
	scanf("%d",&bets); 
	
	system("cls");
	
	for(t=0;t<bets;t++){
		SlowPrint("\n第 ", 50);
		printf("%d",t+1);
		Sleep(50);
		SlowPrint(" 組 自 選 號 : ", 50);
		for(i=0;i<6; i++){
			scanf("%d",&temp);
			for(j=0; j<i; j++){
				if(temp == Optional_num[t][j]){
					i--;
					SlowPrint("\n此 號 碼 已 選 過 。", 50);
					break;
				}
			}
			if(temp != Optional_num[t][j])
				Optional_num[t][i] = temp; 
		}
	}
	
	for(i=0; i<7; i++){
		temp = (rand()%49)+1;// 1 ~ 49
		for(j=0; j<i; j++){
			if(temp == num[j]){
				i--;
				break;
			}
		}
		if(temp != num[j])
			num[i] = temp;
	}
	
	SlowPrint("\n\n一 般 號 碼 : ", 50);
	for(i=0; i<6; i++){
		printf("%d  ", num[i]);	
		Sleep(1000);
	}
	
	SlowPrint("\n\n特 別 號 : ", 50);
	Sleep(1000);	
	printf("%d\n\n", num[i]);
	Sleep(1000);
	
	for(t=0;t<bets;t++){
		for(i=0;i<6;i++){
			for(j=0;j<6;j++){
				if(num[i] == Optional_num[t][j]){
					same[t]++;
				}
			}
		}
		for(i=0;i<6;i++){
			if(num[6] ==  Optional_num[t][i])
				spe_same[t]++;
		}
	}
	
	for(t=0;t<bets;t++){
		if(same[t] == 3 && spe_same[t] == 0){ 
			SlowPrint("\n恭喜您 ! ! !   普獎 NT $300", 50);
    		printf("\n");
    		Sleep(2000);
    	}
		else if(same[t] == 2 && spe_same[t] == 1){ 
			SlowPrint("\n恭喜您 ! ! !   柒獎 NT $400", 50);
    		printf("\n");
    		Sleep(2000);
    	}
		else if(same[t] == 3 && spe_same[t] == 1){ 
			SlowPrint("\n恭喜您 ! ! !   陸獎 NT $1,000", 50);
    		printf("\n");
    		Sleep(2000);
    	}
		else if(same[t] == 4 && spe_same[t] == 0){ 
			SlowPrint("\n恭喜您 ! ! !   伍獎 NT $2,000", 50);
    		printf("\n");
    		Sleep(2000);
    	}
		else if(same[t] == 4 && spe_same[t] == 1){ 
			SlowPrint("\n恭喜您 ! ! !   肆獎 NT $", 50);
    		printf("%.0f",money*0.045);
    		printf("\n");
    		Sleep(2000);
    	} 
		else if(same[t] == 5 && spe_same[t] == 0){ 
			SlowPrint("\n恭喜您 ! ! !   參獎 NT $", 50);
    		printf("%.0f",money*0.07);
    		printf("\n");
    		Sleep(2000);
    	} 
		else if(same[t] == 5 && spe_same[t] == 1){ 
			SlowPrint("\n恭喜您 ! ! !   貳獎 NT $", 50);
    		printf("%.0f",money*0.065);
    		printf("\n");
    		Sleep(2000);
    	}
		else if(same[t] == 6 && spe_same[t] == 0){ 
			SlowPrint("\n恭喜您 ! ! !   頭獎 NT $", 50);
    		printf("%.0f",money*0.82);
    		printf("\n");
    		Sleep(2000);
		}
		else{
			SlowPrint("\n第 ", 50);
			printf("%d",t+1);
			Sleep(50);
			SlowPrint(" 組 號 碼 沒 中 獎 Q A Q。\n", 50);
    		printf("\n");
    		Sleep(2000);
		}
	}
}
void SlowPrint(char* string,int sleeptime){
    int i = 0;
    while(string[i] != '\0')   
    {      
        printf("%c", string[i]);
        Sleep(sleeptime);
        i++;
    }
}
