#include <stdio.h>

int main(void){
	int num1,num2,num3;
	num1=0;
	num2=0;
	num3=0;
	scanf("%d %d %d",&num1,&num2,&num3);
	printf("(a-b)*(b+c)*(c%%a)=%d",(num1-num2)*(num2+num3)*(num3%num1));
	return 0;
	
	
} 
