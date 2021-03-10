#include <stdio.h>
double fahrenheit(int tem);
double celcius(int tem);
int main(void){
	printf("%f",fahrenheit(32));
	
	return 0;
}

double fahrenheit(int tem){
	return (1.8*tem+32.0);
}
double celcius(int tem){
	return (tem-32)/1.8;
}
