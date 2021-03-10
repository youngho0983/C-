#include <stdio.h>
int mul(int num1,int num2);


int main(void){
	int inputNum1=1; 
	int inputNum2=1;
	int count=0; 
	while( !(inputNum1==0 && inputNum2==0) ){
	
	printf("두 개의 숫자 입력:");
	scanf("%d %d",&inputNum1,&inputNum2); 
	printf("%d \n",mul(inputNum1,inputNum2));
	count++;
	}
	
	printf("연산 횟수 : %d",count);
	return 0;
}

int mul(int num1,int num2){
	return num1*num2;
}
