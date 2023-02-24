#include<stdio.h>
#include<math.h>
#define eps 0.1
float a(int x,int n) {
	int r=1;
	for(int i=1; i<=n; i++)
		r*=x;
	return r;
}
float b(int n) {
	int r=1;
	for(int i=2; i<=n; i++)
		r*=i;
	return r;
}
int main() {
	int x,n=0;
	float sig=1.0,sum=0.0,f=1.0;
	scanf("%d",&x);
	do {
		sum+=f;
		n++;
		sig*=-1;
		f=sig*a(x,n)/b(n);
	} while(fabs(f)>=eps);
	printf("%f",sum);
	return 0;
}
