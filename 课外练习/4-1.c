#include<stdio.h>
int main() {
	float x,y;
	scanf("%f",&x);
	if(x<1)
		y=x*x;
	else if(x>=1&&x<10)
		y=3*x-2;
	else if(x>=10)
		y=x*x*x-10*x*x+28;
	printf("%.0f",y);
	return 0;
}