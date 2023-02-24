#include<stdio.h>
#include<math.h>
int main() {
	float eps,t=1,s=0;
	int i=1,sig=1;
	scanf("%f",&eps);
	do {
		s+=t;
		sig*=-1;
		i+=2;
		t=(float)sig/i;
	} while(fabs(t)>=eps);
	printf("%.6f",s);
	return 0;
}
