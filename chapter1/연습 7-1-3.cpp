#include <stdio.h>

int main(void){
	int inputNum;
	int result=0;
	while(inputNum!=0){
		scanf("%d",&inputNum);
		result+=inputNum;
		printf("������ result�� %d \n",result); 
	}
	return 0;
	
}
