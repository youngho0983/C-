#include <stdio.h>
int main(void){
	int x1,y1;
	int x2,y2;
	printf("ù��° ���� ��ġ x y ��ǥ ����");
	scanf("%d %d",&x1,&y1);
	printf("�ι�° ���� ��ġ x y ��ǥ ����");
	scanf("%d %d",&x2,&y2);
	
	int x=x1-x2;
	int y=y1-y2;
	int result=x*y;
	if(result<0){
		result=-result;
	}  
	printf("%d",result);
	
}
