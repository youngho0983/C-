#include <stdio.h>

int main(void){

	int num1;
	int num2;
	int num3;
	printf("한번에 여러개를 입력 받으려면 띄어쓰기로 나눠야한다");
	scanf("%d %d %d",&num1,&num2,&num3);
	printf("num1=%d \nnum2=%d \nnum3=%d",num1,num2,num3);
	return 0;
	
}
