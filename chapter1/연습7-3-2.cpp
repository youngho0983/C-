#include <stdio.h>
int main(void){

	int result=0;
	int num=0;
	do{
		printf(" ÇöÀçÀÇ num =%d \n",num);
		if(num%2==0){
			result+=num;
		} 
		num++;
	}while(num<=100);
	
	printf("%d",result);
	return 0;
	
}
