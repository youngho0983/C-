#include <stdio.h>
int main(void){
	int i=1;
	int j=1;
	
	for(i;i<10;i++){
		for(j;j<10;j++){
			if( i%2==0)
			printf("%d x %d = %d \n",i,j,i*j);
			if(i==j){
				j=1;
				break;
			}
		}
		
	}
	return 0;
	
} 
