#include <stdio.h>
int main(void){
	int x1,y1;
	int x2,y2;
	printf("첫번째 점의 위치 x y 좌표 찍어라");
	scanf("%d %d",&x1,&y1);
	printf("두번째 점의 위치 x y 좌표 찍어라");
	scanf("%d %d",&x2,&y2);
	
	int x=x1-x2;
	int y=y1-y2;
	int result=x*y;
	if(result<0){
		result=-result;
	}  
	printf("%d",result);
	
}
