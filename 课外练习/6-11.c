#include<stdio.h>
int main() {
	int a,n=0;
	float X[1000];
	scanf("%d",&a);
	X[n]=a;
	do {
		X[n+1]=1.0/2.0*(X[n]+a/X[n]);
		n++;
	} while(X[n]-X[n-1]>=0.00001||X[n]-X[n-1]<=-0.00001);
	printf("%.3f",X[n]);
	return 0;
}
