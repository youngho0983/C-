#include <stdio.h>
int getMax(int num1,int num2,int num3);

int main(void){
	int num1,num2,num3;
	scanf("%d %d %d", &num1,&num2,&num3);
	
	printf("%d",getMax(num1,num2,num3));
	return 0;
}

int getMax(int num1,int num2,int num3){
	if(num1>num2){
		if(num1>num3){
			return num1;
		}else{
			return num3;
		}
	}
	
	if(num2>num1){
		if(num2>num3){
			return num2;
		}else{
			return num3;
		}
	}
}
