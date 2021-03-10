#include <stdio.h>
int main(void){
	int num=1;
	int cnum=0;
	int count=0;
	while(count<10){
		for(int i=1;i<=num;i++){
			if(num%i==0){
			cnum++;
			}
			
		}
		if(cnum==2){
		printf("%d ",num);
		count++;
		}
		num++;
		cnum=0;
	}
	return 0;
}
