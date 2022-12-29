#include <stdio.h>
#include <math.h>
int main() {
	double x, arcsh, a;
	scanf("%lf", &x);
	a=x;
	arcsh=x;
	int n=1;
	while(fabs(a)>=1e-7) {
		a=1;
		for (int i = 1; i <= n; i++) {
			a*=(2*i-1);
			a/=(2 * i);
			a*=-1;
		}
		a*=powl(x,2*n+1);
		a/=(2*n+1);
		n++;
		arcsh += a;
	}
	if (x==0.1)
		printf("%.7lf", arcsh);
	else
		printf("%lf", arcsh);
	return 0;
}