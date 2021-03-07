#include <stdio.h>
int main(void){
	int prospectInputNumCount;
	int inputNum;
	int sum=0;
	double avarage;
	
	scanf("%d",&prospectInputNumCount);
	for(int i=0;i<prospectInputNumCount;i++){
		printf("정수 입력:");
		scanf("%d",&inputNum);
		sum+=inputNum; 
	}
	printf(" sum=%d \n",sum);
	printf("prospectInputNumCount=%d \n",prospectInputNumCount);
	
	avarage=(double)sum/prospectInputNumCount;
	
	
	printf("%f",avarage);
	return 0;
	
}
