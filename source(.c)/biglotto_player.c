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
	int num[7];// 6�Ӥ@�븹�X�M�@�ӯS�O��
	srand(time(NULL));
	int Optional_num[5][6];//�ϥΪ̿�J �ۿ︹ 
	int same[5];//�ۦP�� �����Ʀr ���� 
	int spe_same[5];//���S�O��
	int money=100000;//����
	int bets;//��`���� 
	
	 
	
	SlowPrint("�� �J �� �` �� �� ( �� �h �� �� ) : ", 50);	
	scanf("%d",&bets); 
	
	system("cls");
	
	for(t=0;t<bets;t++){
		SlowPrint("\n�� ", 50);
		printf("%d",t+1);
		Sleep(50);
		SlowPrint(" �� �� �� �� : ", 50);
		for(i=0;i<6; i++){
			scanf("%d",&temp);
			for(j=0; j<i; j++){
				if(temp == Optional_num[t][j]){
					i--;
					SlowPrint("\n�� �� �X �w �� �L �C", 50);
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
	
	SlowPrint("\n\n�@ �� �� �X : ", 50);
	for(i=0; i<6; i++){
		printf("%d  ", num[i]);	
		Sleep(1000);
	}
	
	SlowPrint("\n\n�S �O �� : ", 50);
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
			SlowPrint("\n���߱z ! ! !   ���� NT $300", 50);
    		printf("\n");
    		Sleep(2000);
    	}
		else if(same[t] == 2 && spe_same[t] == 1){ 
			SlowPrint("\n���߱z ! ! !   �m�� NT $400", 50);
    		printf("\n");
    		Sleep(2000);
    	}
		else if(same[t] == 3 && spe_same[t] == 1){ 
			SlowPrint("\n���߱z ! ! !   ���� NT $1,000", 50);
    		printf("\n");
    		Sleep(2000);
    	}
		else if(same[t] == 4 && spe_same[t] == 0){ 
			SlowPrint("\n���߱z ! ! !   ��� NT $2,000", 50);
    		printf("\n");
    		Sleep(2000);
    	}
		else if(same[t] == 4 && spe_same[t] == 1){ 
			SlowPrint("\n���߱z ! ! !   �v�� NT $", 50);
    		printf("%.0f",money*0.045);
    		printf("\n");
    		Sleep(2000);
    	} 
		else if(same[t] == 5 && spe_same[t] == 0){ 
			SlowPrint("\n���߱z ! ! !   �Ѽ� NT $", 50);
    		printf("%.0f",money*0.07);
    		printf("\n");
    		Sleep(2000);
    	} 
		else if(same[t] == 5 && spe_same[t] == 1){ 
			SlowPrint("\n���߱z ! ! !   �L�� NT $", 50);
    		printf("%.0f",money*0.065);
    		printf("\n");
    		Sleep(2000);
    	}
		else if(same[t] == 6 && spe_same[t] == 0){ 
			SlowPrint("\n���߱z ! ! !   �Y�� NT $", 50);
    		printf("%.0f",money*0.82);
    		printf("\n");
    		Sleep(2000);
		}
		else{
			SlowPrint("\n�� ", 50);
			printf("%d",t+1);
			Sleep(50);
			SlowPrint(" �� �� �X �S �� �� Q A Q�C\n", 50);
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
