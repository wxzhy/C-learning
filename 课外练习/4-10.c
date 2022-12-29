#include<stdio.h>
int main() {
	float a=1.0,b=1.0,c;
	float sum=0.0;
	for(int i=0; i<20; i++) {
		sum+=b/a;
		c=a+b;
		a=b;
		b=c;
	}
	printf("%.4f",sum);
	return 0;
}