#include<stdio.h>
int main() {
	int a=1,b=2,N,c;
	float s=0;
	scanf("%d",&N);
	for(int i=1; i<=N; i++) {
		s+=(float)b/a;
		c=a+b;
		a=b;
		b=c;
	}
	printf("%.2f",s);
	return 0;
}
