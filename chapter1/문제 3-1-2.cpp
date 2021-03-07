#include <stdio.h>

int main(void){
	int num1,num2,num3;
	
	printf("세개의 숫자를 입력해주세요");
	scanf("%d %d %d",&num1,&num2,&num3);
	printf("%d *%d +%d =%d",num1,num2,num3,num1*num2+num3);
	return 0;
	 
}
