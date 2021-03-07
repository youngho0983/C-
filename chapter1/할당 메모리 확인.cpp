#include <stdio.h>
int main(void){
	char c=65;
	int i=3048;
	double f=3.1415;
	
	printf("c 에 들어있는 값은 :%c \n",c);
	printf("변수 c의 크기: %d\n",sizeof(c));
	printf("변수 i의 크기: %d\n",sizeof(i));
	printf("변수 f의 크기: %d\n",sizeof(f));
	
	return 0;
	 
}
