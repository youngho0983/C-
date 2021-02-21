#include <stdio.h>
int main(void){
	int num1;
	int num2;
	num1=10;
	num2=20;
	printf("%d  %d \n",num1,num2);
	int num3=30;//원래는 이렇게 중간에 이런게 나오면 안되는데 심지어 한 줄에 초기화도 안되는 듯 한데 아마 c++ 이라서 가능한 거겠지? 
	printf("%d",num3); 
	return 0;
	
}
