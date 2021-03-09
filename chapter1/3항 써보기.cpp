#include <stdio.h>
int main(void){
	int num1;
	int num2;
	int result;
	scanf("%d %d", &num1,&num2);
	result= num1>num2? num1-num2:num2-num1;
	printf("%d",result);
	return 0;
	
}
