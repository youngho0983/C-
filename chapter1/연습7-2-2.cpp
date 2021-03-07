#include <stdio.h>
int main(void){
	int inputNum=0;
	int inputCount=0;
	int sum=0;
	while(inputCount<5){
		while(inputNum<=0){
			scanf("%d",&inputNum);
			 
		}
		
		sum+=inputNum;
		inputNum=0;
		inputCount++;
	}
	printf("입력 된 값의 총 합 %d",sum);
	return 0; 
}
