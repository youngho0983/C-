#include <stdio.h>
void insert(int num);
int coin;
int main(void){
	int inputNum;
	
	while(inputNum!=-1){
		scanf("%d",&inputNum);
		if(inputNum==-1)
			break;
		 
		insert(inputNum);
		printf("%d",coin);
	}	
	return 0;
} 

void insert(int num){
	coin+=num;
}
