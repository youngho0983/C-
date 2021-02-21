#include <stdio.h>
int main(void){

	int val1=10;
	int val2=12;
	int result1,result2,result3;
	
	
	result1=(val1==10 && val2==12);
	
	result2=(val1<12 || val2>12);
	
	result3=(!val1);
	
	printf("%d \n %d \n %d\n",result1,result2,result3);
	return 0;
	

}
