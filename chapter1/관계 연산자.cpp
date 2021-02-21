#include <stdio.h>
int main(void){

	int val1=10;
	int val2=12;
	int result1, result2 ,result3;
	
	result1=(val1==val2);
	result2=(val1<=val2);
	result3=(val1>val2);
	printf("%d  %d  %d ",result1,result2,result3);
	printf("트루일때 1 펄스일때 0");
	return 0;
}
