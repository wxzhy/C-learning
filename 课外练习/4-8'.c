#include<stdio.h>
int main() {
	int n,i;
	float pi,c=1;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
		c*=((2.0*i)/(2.0*i-1))*((2.0*i)/(2.0*i+1));
	pi=c*2.0;
	printf("%lf",pi);
	return 0;
}