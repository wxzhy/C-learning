#include<stdio.h>
int main() {
	float x,y;
	scanf("%f %f",&x,&y);
	if(x>0&&y>0)
		putchar('1');
	else if(x<0&&y>0)
		putchar('2');
	else if(x<0&&y<0)
		putchar('3');
	else if(x>0&&y<0)
		putchar('4');
	else if(x==0||y==0)
		putchar('5');
	return 0;

}