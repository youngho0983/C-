#include <stdio.h>
int mul(int num1,int num2);


int main(void){
	int inputNum1=1; 
	int inputNum2=1;
	int count=0; 
	while( !(inputNum1==0 && inputNum2==0) ){
	
	printf("�� ���� ���� �Է�:");
	scanf("%d %d",&inputNum1,&inputNum2); 
	printf("%d \n",mul(inputNum1,inputNum2));
	count++;
	}
	
	printf("���� Ƚ�� : %d",count);
	return 0;
}

int mul(int num1,int num2){
	return num1*num2;
}
