#include<stdio.h>
int main() {
	int a,b,c,d,i;
	for(int x=32; x<100; x++) {
		i=x*x;
		a=i/1000;
		b=(i%1000)/100;
		c=(i%100)/10;
		d=i%10;
		if(a+c==10&&b*d==12)
			printf("%d ",i);
	}
	return 0;
}
