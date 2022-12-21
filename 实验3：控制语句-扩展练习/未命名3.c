#include<stdio.h>
int main() {
	int a,b,c;
	for(int i=200; i<=300; i++) {
		a=i/100;
		b=(i%100)/10;
		c=i%10;
		if(a*b*c==42&&a+b+c==12)
			printf("%d\n",i);
	}
	return 0;
}
