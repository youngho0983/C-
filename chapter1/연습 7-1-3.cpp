#include <stdio.h>

int main(void){
	int inputNum;
	int result=0;
	while(inputNum!=0){
		scanf("%d",&inputNum);
		result+=inputNum;
		printf("현재의 result는 %d \n",result); 
	}
	return 0;
	
}
