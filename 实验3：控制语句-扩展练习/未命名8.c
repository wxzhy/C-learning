#include<stdio.h>
int main() {
	float n,p;
	scanf("%f",&n);
	if(n<=50)
		p=0.53*n;
	else
		p=0.53*50.0+0.58*(n-50);
	printf("%.2f",p);
	return 0;
}
