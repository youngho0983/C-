#include <stdio.h>

int val;
void add(int num);

int main(void){
	printf("%d",val);
	add(3);
	printf("%d",val);
	val++;
	printf("%d",val);
	return 0;
	
}

void add(int num){
	val+=num;
	
}
