#include<stdio.h>
#include<math.h>
int main() {
	int a[20];
	a[0]=0;
	a[1]=1;
	for(int i=2; i<20; i+=2) {
		a[i]=fabs(a[i-1]+a[i-2]);
		a[i+1]=fabs(a[i]-a[i-1]);
	}
	for(int i=0; i<20; i+=4) {
		for(int j=0; j<4; j++)
			printf("%d ",a[i+j]);
		putchar('\n');
	}
	return 0;
}
