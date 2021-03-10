#include <stdio.h>
int sq(int num){
	if(num==1){
	return 2;
	}else{
	return sq(num-1)*2;
	}
}
int main(void){
	int n;
	scanf("%d",&n);
	int i=1;
	while(sq(i)<=n){
		printf("%d\n",sq(i));
		printf("%d \n",i);
		i++;
		
	}
	printf("%d",i);
	return 0;	
}


