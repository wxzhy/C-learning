#include<stdio.h>
#define f(a,b) r=a%b;
int main() {
	int a,b,r;
	scanf("%d %d",&a,&b);
	f(a,b);
	printf("%d",r);
	return 0;
}
