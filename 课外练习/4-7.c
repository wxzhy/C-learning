#include<stdio.h>
int main() {
	double e=0,a=1,n=1;
	while(a>=1e-7) {
		e+=a;
		a/=n;
		n++;
	}
	printf("%lf",e);
	return 0;
}