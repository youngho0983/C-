#include <stdio.h>
void hello(int i){
	while(i>0){
		printf("hello %d \n",i--);
	
	}
}

int main(void){
	hello(10);
	return 0;
	
} 
