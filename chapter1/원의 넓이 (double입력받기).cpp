#include <stdio.h>

int main(void){

	double radius;
	double area;
	
	printf("원의 반지름 입력:");
	scanf("%lf",&radius);
	printf("입력 받은 값 %f \n",radius) ;
	area=radius*radius*3.1415;
	
	printf("원의 넓이:%f\n",area);
	return 0;
	 
}
