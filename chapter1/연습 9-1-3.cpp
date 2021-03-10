#include <stdio.h>
int pevon(int num);

int main(void){

	printf("몇 번째까지 보고싶으세요");
	int inputNum;
	scanf("%d",&inputNum);
	for(int i=1;i<=inputNum;i++){
	printf("%d, ",pevon(i));
	} 
	return 0;
}

int pevon(int num){
	if(num==1){
	return 0;
	}else if(num==2){
	return 1;
	}else{
	return pevon(num-1)+pevon(num-2);
	}
}

