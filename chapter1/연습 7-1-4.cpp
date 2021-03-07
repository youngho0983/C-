#include <stdio.h>
int main(void){
	int inputNum;
	printf("숫자 하나 입력해보소");
	scanf("%d",&inputNum);
	for(int i=9;i>0;i--){
		printf("%d x %d = %d \n",inputNum,i,i*inputNum);
		
	}
	return 0;
	
	 
}
