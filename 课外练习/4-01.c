#include<stdio.h>
int main() {
	float x,y;
	scanf("%f",&x);
	if(x<=2.5)
		y=1.5*x+7.5;
	else if(x>2.5)
		y=9.32*x-34.2;
	printf("%f",y);
	return 0;
}