#include <stdio.h>
int main(void){
	//ũ���� 500 ����� 700 �ݶ� 400
	int money;
	scanf("%d",&money);

	const int BREAD =500;
	const int KKANG=700;
	const int COKE=400;
	for(int bread=1;money-(bread*BREAD)>0;bread++){
		for(int kkang=1;money-(KKANG*kkang)>0;kkang++){
			for(int coke=1;money-(coke*COKE)>0;coke++){
				if (bread*BREAD+kkang*KKANG+coke*COKE==money){
					printf("�� %d ��  %d  �ݶ� %d \n",bread,kkang,coke);
				}
			}
		}
	}
	return 0;
	 
}
