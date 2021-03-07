#include <stdio.h>

int main(void){
	int num1=0;
	int num2=0;
	printf("두개의 정수를 입력해주세요");
	scanf("%d %d",&num1,&num2);
	int minus=num1-num2;
	int multi=num1*num2;
	printf("두수의 차는 %d 두 수의 곱은 %d",minus,multi);
	return 0;
	 
}
