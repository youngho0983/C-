#include <stdio.h>
int main(void){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	int gcm=1;
	for(int i=1;i<=num1;i++){
		if(num1%i==0 && num2%i==0){
			gcm=i;
		}
	}
	printf("%d",gcm);
	return 0;
	
}
