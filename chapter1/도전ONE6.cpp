#include <stdio.h>
int main(void){
	int inputSecond;
	scanf("%d",&inputSecond);
	int h=inputSecond/3600;
	inputSecond%=3600;
	int m=inputSecond/60;
	int s=inputSecond%60;
	printf("%d %d %d",h,m,s);
	return 0;
}
