#include <stdio.h>
int main(void){
	//农覆户 500 货快兵 700 妮扼 400
	int money;
	scanf("%d",&money);

	const int BREAD =500;
	const int KKANG=700;
	const int COKE=400;
	for(int bread=1;money-(bread*BREAD)>0;bread++){
		for(int kkang=1;money-(KKANG*kkang)>0;kkang++){
			for(int coke=1;money-(coke*COKE)>0;coke++){
				if (bread*BREAD+kkang*KKANG+coke*COKE==money){
					printf("户 %d 兵  %d  妮扼 %d \n",bread,kkang,coke);
				}
			}
		}
	}
	return 0;
	 
}
